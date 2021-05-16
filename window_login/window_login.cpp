#include "window_login.h"
#include "ui_window_login.h"
#include <QCryptographicHash>

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
        ui->lineEdit->setStyleSheet(lock_style_other_color);
        ui->lineEdit_2->setStyleSheet(lock_style_other_color);
    }
    else if (username == "" || password == "")
    {
        if (username == "")
        {
            ui->lineEdit->setStyleSheet(lock_style_other_color);
            ui->lineEdit_2->setStyleSheet(default_style_other_color);
        }
        else
        {
            ui->lineEdit->setStyleSheet(default_style_other_color);
            ui->lineEdit_2->setStyleSheet(lock_style_other_color);
        }
    }
    else
    {
        ui->lineEdit->setStyleSheet(default_style_other_color);
        ui->lineEdit_2->setStyleSheet(default_style_other_color);

        QString crypt_password = QCryptographicHash::hash(password.toUtf8(),QCryptographicHash::Md5).toHex();

        sql_database accessing_db;
        QString result_login = accessing_db.check_login_user(username, crypt_password);
        if (result_login == "OK")
        {
            ui->label_3->setStyleSheet(success_style_label);
            ui->label_3->setText("Вы успешно авторизировались!");
            ui->lineEdit->setText("");
            ui->lineEdit_2->setText("");
            g_status_autorization = 1;
            qDebug() << "[INFO] Авторизация пользователя";
            close();
        }
        if (result_login == "NOT")
        {
            ui->label_3->setStyleSheet(lock_style_label);
            ui->label_3->setText("Не верный login или password");
        }
        else if (result_login == "ERROR")
        {
            ui->label_3->setStyleSheet(error_style_label);
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
