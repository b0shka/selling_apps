#include "chat.h"
#include "ui_chat.h"

chat::chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
	if (g_status_online == 0)
	{
		client.conect_server();
		QThread *read_msg;
		connect(this, SIGNAL(read_message()), read_msg, SLOT(read_message()));
		//read_msg->start();
		//connect(&read_msg, SIGNAL(started()), this, SLOT(read_message()));
		qDebug() << "test";
	}
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
