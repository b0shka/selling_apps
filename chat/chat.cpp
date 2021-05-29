#include "chat.h"
#include "ui_chat.h"
#include "../developper_app/developper_app.h"

chat::chat(QString login_dev, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	
	this->login_dev = login_dev;
	ui->label_7->setText(login_dev.split(" ")[0]);
	ui->pushButton_2->setText(login_dev.at(0));
	ui->pushButton_4->setHidden(true);
	
	client.conect_server();
	
	connect(&thread_info, &QThread::started, &info, &thread_add_info::run);
	connect(&info, &thread_add_info::finished, &thread_info, &QThread::terminate);
	connect(&info, SIGNAL(add_all_msg(QString)), this, SLOT(restore_chat(QString)));
	connect(&info, SIGNAL(add_new_msg(QString)), this, SLOT(restore_new_messages(QString)));
	info.moveToThread(&thread_info);
	info.setLogin_dev(login_dev);
	thread_info.start();
	
	connect(&thread_read, &QThread::started, &thread, &thread_chat::run);
	connect(&thread, &thread_chat::finished, &thread_read, &QThread::terminate);
	connect(&thread, SIGNAL(add_msg(QString)), this, SLOT(add_message_from_server(QString)));
	thread.moveToThread(&thread_read);
	thread.setId_server(client.client);
	thread_read.start();
	
	connect(&thread_button, &QThread::started, &online, &thread_online::run);
	connect(&online, &thread_online::finished, &thread_button, &QThread::terminate);
	connect(&online, SIGNAL(add_online(int)), this, SLOT(add_online_in_chat(int)));
	online.moveToThread(&thread_button);
	online.setLogin_dev(login_dev);
	thread_button.start();
	
	connect(&thread_send_msg, &QThread::started, &send, &thread_send::run);
	connect(&send, &thread_send::finished, &thread_send_msg, &QThread::terminate);
	connect(&send, SIGNAL(add_message(QString)), this, SLOT(add_message_to_listwidget(QString)));
	send.moveToThread(&thread_send_msg);
	send.setId_server(client.client);
	send.setLogin_dev(login_dev);
	thread_send_msg.start();
	
	ui->lineEdit_3->setFocus();
}

chat::~chat()
{
	delete ui;
	client.disconnect();
	thread_read.quit();
	thread_read.wait();
	thread_button.quit();
	thread_button.wait();
	thread_info.quit();
	thread_info.wait();
	thread_send_msg.quit();
	thread_send_msg.wait();
	database.change_status_online(g_user_name);
}

void chat::add_online_in_chat(int status)
{
	if (status == 1)
		ui->label_8->setHidden(false);
	else
		ui->label_8->setHidden(true);
}

void chat::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_mousePoint = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void chat::mouseMoveEvent(QMouseEvent* event)
{
	if (event->buttons() & Qt::LeftButton )
	{
		move(event->globalPos() - m_mousePoint);
		event->accept();
	}
}
	
void chat::on_pushButton_clicked()
{	
	QString message = ui->lineEdit_3->text();
	QString text = message;

	if (text.replace(" ", "").size() != 0)
	{
		send.setMessage(message);
		ui->lineEdit_3->setText("");
	}
}

void chat::on_pushButton_2_clicked()
{
	close();
    developper_app profile_developer(ui->label_7->text());
    profile_developer.setModal(true);
    profile_developer.exec();
}

void chat::restore_chat(QString all_message)
{	
	if (all_message.size() != 0)
	{
		if (all_message != "ERROR")
		{
			for (QString i : all_message.split(";"))
			{
				if (i != "")
				{
					if (i.at(0) == '1')
						add_message_to_listwidget(i.mid(1));
					else if (i.at(0) == '0')
						add_message_from_server(i.mid(1));
				}
			}
		}
	}
}

void chat::restore_new_messages(QString new_messages)
{
	if (new_messages.size() != 0)
	{
		if (new_messages != "ERROR")
		{
			QListWidgetItem *item = new QListWidgetItem;
			item->setTextAlignment(Qt::AlignHCenter);
			item->setText("Новые сообщения");
			ui->listWidget->addItem(item);
			for (QString i : new_messages.split(";"))
			{
				if (i != "")
					add_message_from_server(i.mid(1));
			}
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
	ui->listWidget->scrollToBottom();
}

void chat::add_message_from_server(QString message)
{
	QListWidgetItem *item = new QListWidgetItem;
    item->setText(message);
	ui->listWidget->addItem(item);
	ui->listWidget->scrollToBottom();
}

void chat::on_pushButton_4_clicked()
{
	QMessageBox::Button reply = QMessageBox::question(this, "Подтверждение удаления", "Вы уверены?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
	{
        database.delete_message(g_user_name, login_dev, message_name);
		ui->listWidget->clear();
		QString all_messages = database.get_correspondence(g_user_name, login_dev);
		restore_chat(all_messages);
		ui->pushButton_4->setHidden(true);
	}
}

void chat::on_listWidget_itemClicked(QListWidgetItem *item)
{
	if (item->text() != "Новые сообщения")
	{
		ui->pushButton_4->setHidden(false);
		message_name = item->text();
	}
}

void chat::on_pushButton_8_clicked()
{
    close();
}

void chat::on_pushButton_9_clicked()
{
	showMaximized();
}

void chat::on_lineEdit_3_returnPressed()
{
	on_pushButton_clicked();
}
