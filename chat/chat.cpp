#include "chat.h"
#include "ui_chat.h"
#include "../developper_app/developper_app.h"

chat::chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
}

chat::~chat()
{
    delete ui;
	client.disconnect();
	read_msg.wait();
	database.change_status_online(g_user_name);
}

void chat::start(QString login_dev)
{
	this->login_dev = login_dev;
	ui->label_7->setText(login_dev.split(" ")[0]);
	ui->pushButton_2->setText(login_dev.at(0));
	
	client.conect_server();
	database.change_status_online(g_user_name);
	
	read_msg.start();
}
	
void chat::on_pushButton_clicked()
{
	QString message = ui->lineEdit_3->text();
	if (message != "")
	{
		QTime time = QTime::currentTime();
		message = "(" + time.toString("hh:mm") + ") " + message;
		client.send_message(message, login_dev);
		add_message_to_listwidget(message);
		ui->lineEdit_3->clear();
		database.add_all_message(g_user_name, message);
	}
}

void chat::on_pushButton_2_clicked()
{
	close();
    developper_app profile_developer(ui->label_7->text());
    profile_developer.setModal(true);
    profile_developer.exec();
}

void chat::add_message_to_listwidget(QString message)
{
	QListWidgetItem *item = new QListWidgetItem;
	item->setTextAlignment(2);
    item->setText(message);
	ui->listWidget->addItem(item);
}

void chat::add_message_from_server(QString message)
{
	QTime time = QTime::currentTime();
	QListWidgetItem *item = new QListWidgetItem;
    item->setText("(" + time.toString("hh:mm") + ") " + message);
	item->setText(message);
	ui->listWidget->addItem(item);
}
