#include "chat.h"
#include "ui_chat.h"
#include "../developper_app/developper_app.h"

chat::chat(QString login_dev, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
	
	this->login_dev = login_dev;
	ui->label_7->setText(login_dev.split(" ")[0]);
	ui->pushButton_2->setText(login_dev.at(0));
	
	client.conect_server();
	database.change_status_online(g_user_name);
	
	read_msg.start();
	database.start_dialog(g_user_name, login_dev);
	restore_chat();
	restore_new_messages();
}

chat::~chat()
{
    delete ui;
	client.disconnect();
	read_msg.wait();
	database.change_status_online(g_user_name);
}

/*void chat::start(QString login_dev)
{
	this->login_dev = login_dev;
	ui->label_7->setText(login_dev.split(" ")[0]);
	ui->pushButton_2->setText(login_dev.at(0));
	
	client.conect_server();
	database.change_status_online(g_user_name);
	
	read_msg.start();
}*/
	
void chat::on_pushButton_clicked()
{
	QString message = ui->lineEdit_3->text();
	QString text = message;

	if (text.replace(" ", "") != "")
	{
		QTime time = QTime::currentTime();
		message = "(" + time.toString("hh:mm") + ") " + message;
		add_message_to_listwidget(message);
		ui->lineEdit_3->clear();
		client.send_message(message, login_dev);
		database.add_to_chat(g_user_name, login_dev, message);
	}
}

void chat::on_pushButton_2_clicked()
{
	close();
    developper_app profile_developer(ui->label_7->text());
    profile_developer.setModal(true);
    profile_developer.exec();
}

void chat::restore_chat()
{
	QString all_message = database.get_correspondence(g_user_name, login_dev);
	
	if (all_message.size() != 0)
	{
		if (all_message != "ERROR")
		{
			for (QString i : all_message.split(";"))
				if (i != "")
					add_message_to_listwidget(i);
		}
	}
}

void chat::restore_new_messages()
{
	QString new_messages = database.get_new_messages(g_user_name, login_dev);
	if (new_messages.size() != 0)
	{
		if (new_messages != "ERROR")
		{
			QListWidgetItem *item = new QListWidgetItem;
			item->setTextAlignment(Qt::AlignHCenter);
			item->setText("Новые сообщения");
			ui->listWidget->addItem(item);
			for (QString i : new_messages.split(";"))
				if (i != "")
					add_message_from_server(i);
		}
		database.new_messages_to_all_messages(g_user_name, login_dev);
	}
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
	QListWidgetItem *item = new QListWidgetItem;
    item->setText(message);
	ui->listWidget->addItem(item);
}
