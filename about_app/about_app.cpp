#include "about_app.h"
#include "ui_about_app.h"
#include "../chat/chat.h"

about_app::about_app(QList<QString> param_app, QWidget *parent) : QDialog(parent), ui(new Ui::about_app)
{
    ui->setupUi(this);

    ui->pushButton_4->setHidden(true);
    ui->pushButton_5->setHidden(true);

    ui->label->setText(param_app[0]);
    ui->pushButton->setText(param_app[1]);

    QList<QString> other_info_app = database.get_all_info_app_list_profile(param_app);
    ui->label_3->setText(other_info_app[0] + " руб");
    ui->label_6->setText(other_info_app[1]);
    ui->label_7->setText(other_info_app[2]);

    int user_id = database.get_id_user(g_user_name);
    QString check_id_star = database.check_id_in_id_star_app(ui->pushButton->text(), ui->label->text(), QString::number(user_id));
    QString app_id = database.get_id_app(param_app[1], param_app[0]);
    QString check_id_app_favorite = database.check_app_favorite(app_id);

    if (g_status_autorization == 0)
    {
        ui->pushButton_2->setHidden(true);
        ui->pushButton_3->setHidden(true);
        ui->pushButton_4->setHidden(true);
        ui->pushButton_5->setHidden(true);
    }
    else
    {
        if (check_id_star == "OK")
        {
            ui->pushButton_2->setHidden(true);
            ui->pushButton_5->setHidden(false);
        }
        if (check_id_app_favorite == "OK")
        {
            ui->pushButton_3->setHidden(true);
            ui->pushButton_4->setHidden(false);
        }
    }
}

about_app::~about_app()
{
    delete ui;
}

void about_app::on_pushButton_clicked()
{
    close();
    developper_app profile_developer(ui->pushButton->text());
    profile_developer.setModal(true);
    profile_developer.exec();
}

void about_app::on_pushButton_2_clicked()
{
    if (g_status_autorization == 1)
    {
        QString result_star = database.add_star_to_app(ui->pushButton->text(), ui->label->text());

        if (result_star == "Success")
        {
            ui->pushButton_2->setHidden(true);
            ui->pushButton_5->setHidden(false);
        }
    }
}

void about_app::on_pushButton_3_clicked()
{
    if (g_status_autorization == 1)
    {
        QString result_favorite = database.add_app_to_favorite(ui->pushButton->text(), ui->label->text());

        if (result_favorite == "Success")
        {
            ui->pushButton_3->setHidden(true);
            ui->pushButton_4->setHidden(false);
        }
    }
}

void about_app::on_pushButton_4_clicked()
{
    if (g_status_autorization == 1)
    {
        QString result_delete_favorite = database.delete_app_to_favorite(ui->pushButton->text(), ui->label->text());

        if (result_delete_favorite == "Success")
        {
            ui->pushButton_4->setHidden(true);
            ui->pushButton_3->setHidden(false);
        }
    }
}

void about_app::on_pushButton_5_clicked()
{
    if (g_status_autorization == 1)
    {
        QString result_star = database.delete_app_star(ui->pushButton->text(), ui->label->text());

        if (result_star == "Success")
        {
            ui->pushButton_5->setHidden(true);
            ui->pushButton_2->setHidden(false);
        }
    }
}

void about_app::on_pushButton_6_clicked()
{
    chat chat_dev;
    chat_dev.setModal(true);
	chat_dev.connection();
    chat_dev.exec();
	
	chat_dev.disconnection();
}
