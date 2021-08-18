#include "messenger.h"
#include "ui_messenger.h"

messenger::messenger(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::messenger)
{
	popUp = new popup();
	ui->setupUi(this);
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	
	ui->pushButton->setHidden(true);
	add_chats();
}

messenger::~messenger()
{
	delete ui;
}

void messenger::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_mousePoint = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void messenger::mouseMoveEvent(QMouseEvent* event)
{
	if (event->buttons() & Qt::LeftButton )
	{
		move(event->globalPos() - m_mousePoint);
		event->accept();
	}
}

void messenger::add_chats()
{
	QString list_chats = database.get_dialogs(g_user_name);
	if (list_chats != "ERROR")
	{
		ui->listWidget->clear();
		for (QString i : list_chats.split(";"))
		{
			if (i != "")
			{
				int count_new_messages = database.check_new_message_in_chat(i);
				QListWidgetItem *item = new QListWidgetItem;
				if (count_new_messages > 0)
					item->setText(i + " (" + QString::number(count_new_messages) + ")");
				else
					item->setText(i);
				//item->setIcon(QIcon("../img/green.jpg"));
				//ui->listWidget->setIconSize(QSize(32, 32));
				ui->listWidget->addItem(item);
			}
			else
				break;
		}
	}
	else
	{
		qDebug(logError) << "Получение переписок";
		popUp->setPopupText("Ошибка на стороне сервера");
		popUp->show();
	}
}

void messenger::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
	close();
	chat chat_dev(item->text().split(" (").at(0));
    chat_dev.setModal(true);
    chat_dev.exec();
}

void messenger::on_listWidget_itemClicked(QListWidgetItem *item)
{
	ui->pushButton->setHidden(false);
	chat_name = item->text();
}

void messenger::on_pushButton_clicked()
{
	QMessageBox::Button reply = QMessageBox::question(this, "Подтверждение удаления", "Вы уверены?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
	{
        QString result_del = database.delete_chat(g_user_name, chat_name);
		if (result_del == "ERROR")
		{
			qDebug(logError) << "Удаление переписки";
			popUp->setPopupText("Ошибка на стороне сервера");
			popUp->show();
		}
		else
		{
			qDebug(logDebug) << "Удаление переписки";
			popUp->setPopupText("Переписка успешно удалена");
			popUp->show();
			
			ui->listWidget->clear();
			add_chats();
			ui->pushButton->setHidden(true);
		}
	}
}

void messenger::on_pushButton_8_clicked()
{
	close();
}

void messenger::on_pushButton_9_clicked()
{
    showMinimized();
}
