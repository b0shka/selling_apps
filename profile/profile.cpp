#include "profile.h"
#include "ui_profile.h"
#include "../user_apps/user_apps.h"

profile::profile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profile)
{
    ui->setupUi(this);
    ui->lineEdit->setText(g_user_name);
    get_info_from_db(g_user_name);
}

profile::~profile()
{
    delete ui;
}

void profile::get_info_from_db(QString login)
{
    QList<QString> data = user_info.get_info_for_profile(login);
    if (data.at(0) != "ERROR")
    {
        ui->label_2->setText(data.at(0));
        ui->lineEdit_2->setText(data.at(1));
        ui->lineEdit_3->setText(data.at(2));
    }
}

void profile::on_pushButton_clicked()
{
    QMessageBox::Button reply = QMessageBox::question(this, "Подтверждение удаления", "Вы уверены?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        sql_database user_delete;
        QString result_delete = user_delete.delete_user_from_db(g_user_name);
        if (result_delete == "Success")
        {
            QMessageBox::information(this, "Уведомление", "Запись удалена");
            close();
            g_status_delete = 1;
        }
    }
}

void profile::on_pushButton_2_clicked()
{
    QString new_login = ui->lineEdit->text();

    if (new_login == "")
        ui->lineEdit->setStyleSheet(lock_style_other_color);
    else
    {
        ui->lineEdit->setStyleSheet(default_style_other_color);

        QString user_id = ui->label_2->text();
        QString email = ui->lineEdit_2->text();
        QString number_phone = ui->lineEdit_3->text();
        QString result_save = user_info.save_change_in_profile({user_id, new_login, email, number_phone});
        if (result_save != "ERROR")
        {
            QMessageBox::information(this, "Уведомление", "Данные сохранены");
            g_status_change = 1;
            g_user_name = new_login;
            close();
        }
    }
}

void profile::on_pushButton_3_clicked()
{
    close();
    g_status_out = 1;
}

void profile::on_pushButton_4_clicked()
{
    close();
    user_apps list_apps;
    list_apps.setModal(true);
    list_apps.exec();
}
