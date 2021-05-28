#include "about_app.h"
#include "ui_about_app.h"
#include "../chat/chat.h"

about_app::about_app(QList<QString> param_app, QWidget *parent) : QDialog(parent), ui(new Ui::about_app)
{
    ui->setupUi(this);

    ui->favorite_del->setHidden(true);
    ui->star_del->setHidden(true);

    ui->label->setText(param_app[0]);
    ui->login_dev->setText(param_app[1]);

    QList<QString> other_info_app = database.get_all_info_app_list_profile(param_app);
    ui->label_3->setText(other_info_app[0] + " ₽");
    ui->label_6->setText(other_info_app[1]);
    ui->label_7->setText(other_info_app[2]);
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);

    int user_id = database.get_id_user(g_user_name);
    QString check_id_star = database.check_id_in_id_star_app(ui->login_dev->text(), ui->label->text(), QString::number(user_id));
    QString app_id = database.get_id_app(param_app[1], param_app[0]);
    QString check_id_app_favorite = database.check_app_favorite(app_id);

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

about_app::~about_app()
{
    delete ui;
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
	}
}

void about_app::on_favorite_add_clicked()
{
	QString result_favorite = database.add_app_to_favorite(ui->login_dev->text(), ui->label->text());
	
	if (result_favorite == "Success")
	{
		ui->favorite_add->setHidden(true);
		ui->favorite_del->setHidden(false);
	}
}

void about_app::on_favorite_del_clicked()
{
	QString result_delete_favorite = database.delete_app_to_favorite(ui->login_dev->text(), ui->label->text());
	
	if (result_delete_favorite == "Success")
	{
		ui->favorite_del->setHidden(true);
		ui->favorite_add->setHidden(false);
	}
}

void about_app::on_star_del_clicked()
{
	QString result_star = database.delete_app_star(ui->login_dev->text(), ui->label->text());
	
	if (result_star == "Success")
	{
		ui->star_del->setHidden(true);
		ui->star_add->setHidden(false);
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
