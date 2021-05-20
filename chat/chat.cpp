﻿#include "chat.h"
#include "ui_chat.h"

chat::chat(QString login_dev, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
	
	ui->label_7->setText(login_dev.split(" ")[0]);
	ui->pushButton_2->setText(login_dev.at(0));
	client.id_socket = database.get_id_socket_user(ui->label_7->text());
}

chat::~chat()
{
    delete ui;
}
	
void chat::on_pushButton_clicked()
{
	QString message = ui->lineEdit_3->text();
	if (message != "")
	{
		client.send_message(message);
		add_message_to_listwidget(message);
		ui->lineEdit_3->clear();
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
	QTime time = QTime::currentTime();
	QListWidgetItem *item = new QListWidgetItem;
	item->setTextAlignment(2);
    item->setText("(" + time.toString("hh:mm") + ") " + message);
	ui->listWidget->addItem(item);
}

void chat::read_message()
{
	for (int i = 0; i < 10; i++)
		qDebug() << i;
}
