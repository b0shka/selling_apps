#include "profile.h"
#include "ui_profile.h"
#include "../autorization_mainwindow/autorization_mainwindow.h"

profile::profile(QString login, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profile)
{
    ui->setupUi(this);
    ui->label->setText(login);
    user_name = login;
    get_info_from_db(login);
}

profile::~profile()
{
    delete ui;
}

void profile::get_info_from_db(QString login)
{
    sql_database user_info;
    QList<QString> data = user_info.get_info_for_profile(login);
    if (data.at(0) != "ERROR")
    {
        ui->label_2->setText(data.at(0));
    }
}

void profile::on_pushButton_clicked()
{
    QMessageBox::Button reply = QMessageBox::question(this, "Подтверждение удаления", "Вы уверены?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        sql_database user_delete;
        QString result_delete = user_delete.delete_user_from_db(user_name);
        if (result_delete == "Success")
        {
            QMessageBox::information(this, "Уведомление", "Запись удалена");
            close();
            status_delete = 1;
        }
    }
}
