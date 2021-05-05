#include "window_login.h"
#include "ui_window_login.h"

window_login::window_login(QWidget *parent) : QDialog(parent), ui(new Ui::window_login)
{
    ui->setupUi(this);
}

window_login::~window_login()
{
    delete ui;
}

void window_login::on_pushButton_clicked()
{
    username = ui->lineEdit->text();
    password = ui->lineEdit_2->text();

    if (username == "" && password == "")
    {
        ui->lineEdit->setStyleSheet(data.lock_style_other_color);
        ui->lineEdit_2->setStyleSheet(data.lock_style_other_color);
    }
    else if (username == "" || password == "")
    {
        if (username == "")
        {
            ui->lineEdit->setStyleSheet(data.lock_style_other_color);
            ui->lineEdit_2->setStyleSheet(data.default_style_other_color);
        }
        else
        {
            ui->lineEdit->setStyleSheet(data.default_style_other_color);
            ui->lineEdit_2->setStyleSheet(data.lock_style_other_color);
        }
    }
    else
    {
        ui->lineEdit->setStyleSheet(data.default_style_other_color);
        ui->lineEdit_2->setStyleSheet(data.default_style_other_color);

        sql_database accessing_db;
        QString result_login = accessing_db.check_login_user(username, password);
        if (result_login == "OK")
        {
            ui->label_3->setStyleSheet(data.success_style_label);
            ui->label_3->setText("Вы успешно авторизировались!");
            ui->lineEdit->setText("");
            ui->lineEdit_2->setText("");
            status_autorization = 1;
            qDebug() << "[INFO] Авторизация пользователя";
            close();
            user_name = accessing_db.user_name_login;
        }
        if (result_login == "NOT")
        {
            ui->label_3->setStyleSheet(data.lock_style_label);
            ui->label_3->setText("Не верный login или password");
        }
        else if (result_login == "ERROR")
        {
            ui->label_3->setStyleSheet(data.error_style_label);
            ui->label_3->setText("Ошибка на стороне сервера");
        }
    }
}

void window_login::on_pushButton_2_clicked()
{
    close();
    window_registration registration;
    registration.setModal(true);
    registration.exec();
}
