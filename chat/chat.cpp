#include "chat.h"
#include "ui_chat.h"

chat::chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
	if (g_status_online == 0)
		client.conect_server();
}

chat::~chat()
{
    delete ui;
}
	
void chat::on_pushButton_clicked()
{
	QString message = ui->lineEdit_3->text();
	client.send_message(message);
	add_message_to_listwidget(message);
	ui->lineEdit_3->clear();
}

void chat::add_message_to_listwidget(QString message)
{
	QTime time = QTime::currentTime();
	QListWidgetItem *item = new QListWidgetItem;
	item->setTextAlignment(2);
    item->setText("(" + time.toString("hh:mm") + ") " + message);
    ui->listWidget->addItem(item);
}
