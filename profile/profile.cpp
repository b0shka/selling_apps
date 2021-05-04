#include "profile.h"
#include "ui_profile.h"
#include "../autorization_mainwindow/autorization_mainwindow.h"

profile::profile(QString login, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profile)
{
    ui->setupUi(this);
    ui->lineEdit->setText(login);
    user_name = login;
    get_info_from_db(login);
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
        user_id = data.at(0);
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
        QString result_delete = user_delete.delete_user_from_db(user_name);
        if (result_delete == "Success")
        {
            QMessageBox::information(this, "Уведомление", "Запись удалена");
            close();
            status_delete = 1;
        }
    }
}

void profile::on_pushButton_2_clicked()
{
    QString lock_style = "padding:2px 5px;"
                         "height: 28px;"
                         "color: white;"
                         "background-color: #2a2a2a;"
                         "border-radius: 5px;"
                         "border: 2px solid #f5a2a2;"
                         "font-size: 14px;";
    QString default_style = "padding:2px 5px;"
                            "height: 28px;"
                            "color: white;"
                            "background-color: #2a2a2a;"
                            "border-radius: 5px;"
                            "border: none;"
                            "font-size: 14px;";

    QString new_login = ui->lineEdit->text();

    if (new_login == "")
        ui->lineEdit->setStyleSheet(lock_style);
    else
    {
        QString email = ui->lineEdit_2->text();
        QString number_phone = ui->lineEdit_3->text();
        QString result_save = user_info.save_change_in_profile({user_id, new_login, email, number_phone});
        if (result_save != "ERROR")
        {
            QMessageBox::information(this, "Уведомление", "Данные сохранены");
            status_change = 1;
            user_name = new_login;
            close();
        }
    }
}

void profile::on_pushButton_3_clicked()
{

}
