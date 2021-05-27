#include "messenger.h"
#include "ui_messenger.h"

messenger::messenger(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::messenger)
{
	popUp = new popup();
	ui->setupUi(this);
	ui->pushButton->setHidden(true);
	add_chats();
}

messenger::~messenger()
{
	delete ui;
}

void messenger::add_chats()
{
	QString list_chats = database.get_dialogs(g_user_name);
	if (list_chats != "ERROR")
	{
		for (QString i : list_chats.split(";"))
		{
			if (i == "")
				break;
			QListWidgetItem *item = new QListWidgetItem;
			item->setText(i);
			//item->setIcon(QIcon("../img/green.jpg"));
			//ui->listWidget->setIconSize(QSize(32, 32));
			ui->listWidget->addItem(item);
		}
	}
}

void messenger::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
	close();
	chat chat_dev(item->text());
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
        database.delete_chat(g_user_name, chat_name);
		popUp->setPopupText("Переписка успешно удалена");
		popUp->show();
		ui->listWidget->clear();
		add_chats();
		ui->pushButton->setHidden(true);
	}
}
