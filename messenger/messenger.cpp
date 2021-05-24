#include "messenger.h"
#include "ui_messenger.h"

messenger::messenger(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::messenger)
{
	ui->setupUi(this);
	add_chats();
}

messenger::~messenger()
{
	delete ui;
}

void messenger::add_chats()
{
	sql_database database;
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
    //chat_dev.start(ui->pushButton->text());
    chat_dev.setModal(true);
    chat_dev.exec();
}
