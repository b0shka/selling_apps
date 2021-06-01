#include "chat.h"
#include "ui_chat.h"
#include "../developper_app/developper_app.h"

chat::chat(QString login_dev, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
	popUp = new popup();
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	
	this->login_dev = login_dev;
	ui->label_7->setText(login_dev.split(" ")[0]);
	ui->pushButton_2->setText(login_dev.at(0));
	ui->pushButton_4->setHidden(true);
	ui->label_8->setHidden(true);
	
	client.conect_server();
	if (client.result_connect == -1)
	{
		popUp->setPopupText("Не удалось подключиться к серверу");
		popUp->show();
	}
	else
	{
		connect(&thread_info, &QThread::started, &info, &thread_in_chat::add_ingo);
		connect(&info, &thread_in_chat::finished, &thread_info, &QThread::terminate);
		connect(&info, SIGNAL(add_all_msg(QString)), this, SLOT(restore_chat(QString)));
		connect(&info, SIGNAL(add_new_msg(QString)), this, SLOT(restore_new_messages(QString)));
		info.moveToThread(&thread_info);
		info.setLogin_dev(login_dev);
		thread_info.start();
		
		connect(&thread_signal_msg, &QThread::started, &read_msg, &thread_in_chat::run);
		connect(&read_msg, &thread_in_chat::finished, &thread_signal_msg, &QThread::terminate);
		connect(&read_msg, SIGNAL(add_msg(QString)), this, SLOT(add_message_from_server(QString)));
		read_msg.moveToThread(&thread_signal_msg);
		read_msg.setId_server(client.client);
		read_msg.setLogin_dev(login_dev);
		thread_signal_msg.start();
		
		connect(&thread_send_msg, &QThread::started, &send_msg, &thread_in_chat::sending);
		connect(&send_msg, &thread_in_chat::finished, &thread_send_msg, &QThread::terminate);
		connect(&send_msg, SIGNAL(add_send_msg(QString)), this, SLOT(add_message_to_listwidget(QString)));
		send_msg.moveToThread(&thread_send_msg);
		send_msg.setLogin_dev(login_dev);
		send_msg.setId_server(client.client);
		thread_send_msg.start();
		
		connect(&thread_button, &QThread::started, &online, &thread_in_chat::check_online);
		connect(&online, &thread_in_chat::finished, &thread_button, &QThread::terminate);
		connect(&online, SIGNAL(add_online(int)), this, SLOT(add_online_in_chat(int)));
		online.moveToThread(&thread_button);
		online.setLogin_dev(login_dev);
		thread_button.start();
	}
	
	ui->lineEdit_3->setFocus();
}

chat::~chat()
{
	delete ui;
	if (client.result_connect != -1)
	{
		client.disconnect();
		thread_info.quit();
		thread_info.wait();
		thread_signal_msg.quit();
		thread_signal_msg.wait();
		thread_send_msg.quit();
		thread_send_msg.wait();
		thread_button.quit();
		thread_button.wait();
		database.change_status_online(g_user_name);
	}
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
	if (client.result_connect != -1)
	{
		QString message = ui->lineEdit_3->text();
		QString text = message;
		
		if (text.replace(" ", "").size() != 0)
		{
			ui->lineEdit_3->setText("");
			send_msg.setMessage(message);
		}
		if (status_read_new_msg == 1)
		{
			ui->listWidget->clear();
			QString all_messages = database.get_correspondence(g_user_name, login_dev);
			if (all_messages == "ERROR")
			{
				popUp->setPopupText("Ошибка на стороне сервера");
				popUp->show();
			}
			else
			{
				restore_chat(all_messages);
				status_read_new_msg = 0;
			}
		}
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
	if (all_message != "")
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

void chat::restore_new_messages(QString new_messages)
{
	if (new_messages != "")
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
			database.new_messages_to_all_messages(g_user_name, login_dev);
		}
		else
		{
			popUp->setPopupText("Ошибка на стороне сервера");
			popUp->show();
		}
	}
	status_read_new_msg = 1;
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
        QString result_del = database.delete_message(g_user_name, login_dev, message_name);
		if (result_del == "ERROR")
		{
			popUp->setPopupText("Ошибка на стороне сервера");
			popUp->show();
		}
		else
		{
			ui->listWidget->clear();
			QString all_messages = database.get_correspondence(g_user_name, login_dev);
			if (all_messages == "ERROR")
			{
				popUp->setPopupText("Ошибка на стороне сервера");
				popUp->show();
			}
			else
			{
				restore_chat(all_messages);
				ui->pushButton_4->setHidden(true);
			}
		}
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
