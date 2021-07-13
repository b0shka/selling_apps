#include "user_apps.h"
#include "ui_user_apps.h"
#include "../about_app/about_app.h"
#include "../about_my_app/about_my_app.h"

user_apps::user_apps(QString login, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_apps)
{
    ui->setupUi(this);
	popUp = new popup();
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	
    this->login = login;
    QList<QString> list_apps_name = database.get_apps_for_list_profile(login);
	if (list_apps_name.size() != 0)
	{
		if (list_apps_name.at(0) == "ERROR")
		{
			qDebug(logError) << "Получение программ из профиля";
			popUp->setPopupText("Ошибка на стороне сервера");
			popUp->show();
		}
		else
		{
			add_apps_to_listWidget(list_apps_name);
			list_apps_name.clear();
		}
	}
	else
	{
		add_apps_to_listWidget(list_apps_name);
		list_apps_name.clear();
	}
}

user_apps::~user_apps()
{
    delete ui;
}

void user_apps::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_mousePoint = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void user_apps::mouseMoveEvent(QMouseEvent* event)
{
	if (event->buttons() & Qt::LeftButton )
	{
		move(event->globalPos() - m_mousePoint);
		event->accept();
	}
}

void user_apps::add_apps_to_listWidget(QList<QString> list_apps)
{
    ui->listWidget->clear();
    for (QString i : list_apps)
    {
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(i);
        ui->listWidget->addItem(item);
    }
    list_apps.clear();
}

void user_apps::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QList<QString> param_app = {item->text(), login};
    if (g_status_now_profile == 1 and g_user_name == login)
    {
        about_my_app info_app(param_app);
        info_app.setModal(true);
        info_app.exec();

        if (g_status_change_app == 1 or g_status_delete_app == 1)
        {
            QList<QString> list_apps_name = database.get_apps_for_list_profile(login);
			if (list_apps_name.size() != 0)
			{
				if (list_apps_name.at(0) == "ERROR")
				{
					qDebug(logError) << "Получение программ из профиля";
					popUp->setPopupText("Ошибка на стороне сервера");
					popUp->show();
				}
				else
				{
					add_apps_to_listWidget(list_apps_name);
					list_apps_name.clear();
				}
			}
			else
			{
				add_apps_to_listWidget(list_apps_name);
				list_apps_name.clear();
			}
        }
    }
    else
    {
        about_app info_app(param_app);
        info_app.setModal(true);
        info_app.exec();
    }
}

void user_apps::on_pushButton_8_clicked()
{
    close();
}

void user_apps::on_pushButton_9_clicked()
{
    showMinimized();
}
