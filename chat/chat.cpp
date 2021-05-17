#include "chat.h"
#include "ui_chat.h"

chat::chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
}

chat::~chat()
{
    delete ui;
}

void chat::connection()
{
	client.conect_server();
}

void chat::disconnection()
{
	client.disconnect_server();
}
	
void chat::on_pushButton_clicked()
{
    message = ui->lineEdit_3->text();
	client.send_mesage(message);
	ui->lineEdit_3->clear();
}
