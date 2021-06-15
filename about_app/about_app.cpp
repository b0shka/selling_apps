#include "about_app.h"
#include "ui_about_app.h"
#include "../chat/chat.h"

about_app::about_app(QList<QString> param_app, QWidget *parent) : QDialog(parent), ui(new Ui::about_app)
{
    ui->setupUi(this);
	popUp = new popup();
	
	add_info(param_app);
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);

    int user_id = database.get_id_user(g_user_name);
	if (user_id == 0)
	{
		popUp->setPopupText("Ошибка на стороне сервера");
		popUp->show();
	}
	else
	{
		QString check_id_star = database.check_id_in_id_star_app(ui->login_dev->text(), ui->label->text(), QString::number(user_id));
		if (check_id_star == "ERROR")
		{
			popUp->setPopupText("Ошибка на стороне сервера");
			popUp->show();
		}
		else
		{
			QString app_id = database.get_id_app(param_app[1], param_app[0]);
			if (app_id == "ERROR")
			{
				popUp->setPopupText("Ошибка на стороне сервера");
				popUp->show();
			}
			else
			{
				QString check_id_app_favorite = database.check_app_favorite(app_id);
				if (check_id_app_favorite == "ERROR")
				{
					popUp->setPopupText("Ошибка на стороне сервера");
					popUp->show();
				}
				else
				{
					if (g_status_autorization == 0)
					{
						ui->star_add->setHidden(true);
						ui->favorite_add->setHidden(true);
						ui->favorite_del->setHidden(true);
						ui->star_del->setHidden(true);
						ui->messages->setHidden(true);
					}
					else
					{
						if (check_id_star == "OK")
						{
							ui->star_add->setHidden(true);
							ui->star_del->setHidden(false);
						}
						if (check_id_app_favorite == "OK")
						{
							ui->favorite_add->setHidden(true);
							ui->favorite_del->setHidden(false);
						}
						ui->messages->setHidden(false);
					}
				}
			}
		}
	}
	
	get_views(param_app[1], param_app[0]);
}

about_app::~about_app()
{
	delete ui;
}

void about_app::add_info(QList<QString> param_app)
{
	ui->label->setText(param_app[0]);
    ui->login_dev->setText(param_app[1]);

    QList<QString> other_info_app = database.get_all_info_app_list_profile(param_app);
	if (other_info_app[0] == "ERROR")
	{
		popUp->setPopupText("Ошибка на стороне сервера");
		popUp->show();
	}
	else
	{
		ui->label_3->setText(other_info_app[0] + " ₽");
		ui->label_6->setText(other_info_app[1]);
		QString list_tech = "";
		for (QString i : other_info_app[2].split(";"))
		{
			if (i != "")
				list_tech += "·" + i + "\n";
		}
		ui->label_7->setText(list_tech);
	}
	
	QList<QByteArray> list_bytes_photo = database.get_bytes_photo(param_app[0], param_app[1]);
	if (list_bytes_photo.size() == 0)
	{
		popUp->setPopupText("Ошибка на стороне сервера");
		popUp->show();
	}
	else
	{
		QPixmap one_Pixmap = QPixmap();
		QPixmap two_Pixmap = QPixmap();
		QPixmap three_Pixmap = QPixmap();
		
		one_Pixmap.loadFromData(list_bytes_photo[0]);
		two_Pixmap.loadFromData(list_bytes_photo[1]);
		three_Pixmap.loadFromData(list_bytes_photo[2]);
		
		ui->label_9->setPixmap(one_Pixmap.scaled(121, 91));
		ui->label_10->setPixmap(two_Pixmap.scaled(121, 91));
		ui->label_11->setPixmap(three_Pixmap.scaled(121, 91));
	}
}

void about_app::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_mousePoint = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void about_app::mouseMoveEvent(QMouseEvent* event)
{
	if (event->buttons() & Qt::LeftButton )
	{
		move(event->globalPos() - m_mousePoint);
		event->accept();
	}
}

void about_app::get_views(QString login, QString name_app)
{
	if (g_status_autorization == 1)
		database.add_views_to_app(login, name_app);
		
	int count_views = database.get_count_views_in_app(login, name_app);
	if (count_views != -1)
		ui->label_13->setText(QString::number(count_views));
	else
		ui->label_12->clear();
}

void about_app::on_login_dev_clicked()
{
    close();
    developper_app profile_developer(ui->login_dev->text());
    profile_developer.setModal(true);
    profile_developer.exec();
}

void about_app::on_star_add_clicked()
{
	QString result_star = database.add_star_to_app(ui->login_dev->text(), ui->label->text());
	
	if (result_star == "Success")
	{
		ui->star_add->setHidden(true);
		ui->star_del->setHidden(false);
		popUp->setPopupText("Звезда поставлена");
		popUp->show();
	}
	else
	{
		popUp->setPopupText("Ошибка на стороне сервера");
		popUp->show();
	}
}

void about_app::on_favorite_add_clicked()
{
	QString result_favorite = database.add_app_to_favorite(ui->login_dev->text(), ui->label->text());
	
	if (result_favorite == "Success")
	{
		ui->favorite_add->setHidden(true);
		ui->favorite_del->setHidden(false);
		popUp->setPopupText("Программа добавлена в избранное");
		popUp->show();
	}
	else
	{
		popUp->setPopupText("Ошибка на стороне сервера");
		popUp->show();
	}
}

void about_app::on_favorite_del_clicked()
{
	QString result_delete_favorite = database.delete_app_to_favorite(ui->login_dev->text(), ui->label->text());
	
	if (result_delete_favorite == "Success")
	{
		ui->favorite_del->setHidden(true);
		ui->favorite_add->setHidden(false);
		popUp->setPopupText("Программа удалена из избранного");
		popUp->show();
	}
	else
	{
		popUp->setPopupText("Ошибка на стороне сервера");
		popUp->show();
	}
}

void about_app::on_star_del_clicked()
{
	QString result_star = database.delete_app_star(ui->login_dev->text(), ui->label->text());
	
	if (result_star == "Success")
	{
		ui->star_del->setHidden(true);
		ui->star_add->setHidden(false);
		popUp->setPopupText("Звезда удалена");
		popUp->show();
	}
	else
	{
		popUp->setPopupText("Ошибка на стороне сервера");
		popUp->show();
	}
}

void about_app::on_messages_clicked()
{
	chat chat_dev(ui->login_dev->text());
    chat_dev.setModal(true);
    chat_dev.exec();
}

void about_app::on_close_clicked()
{
    close();
}

void about_app::on_hide_clicked()
{
    showMinimized();
}
