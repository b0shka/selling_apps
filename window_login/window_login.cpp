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

    QString lock_style = "padding:2px 5px;"
                         "height: 28px;"
                         "color: white;"
                         "background-color: #404040;"
                         "border-radius: 5px;"
                         "border: 2px solid #f5a2a2;"
                         "font-size: 14px;";
    QString default_style = "padding:2px 5px;"
                            "height: 28px;"
                            "color: white;"
                            "background-color: #404040;"
                            "border-radius: 5px;"
                            "border: none;"
                            "font-size: 14px;";
    QString lock_style_label = "font-size: 14px;"
                               "color: #f5a2a2;";
    QString success_style_label = "font-size: 14px;"
                                  "color: #93edd2";
    QString error_style_label = "font-size: 14px;"
                                "color: #ffc552";

    if (username == "" && password == "")
    {
        ui->lineEdit->setStyleSheet(lock_style);
        ui->lineEdit_2->setStyleSheet(lock_style);
    }
    else if (username == "" || password == "")
    {
        if (username == "")
        {
            ui->lineEdit->setStyleSheet(lock_style);
            ui->lineEdit_2->setStyleSheet(default_style);
        }
        else
        {
            ui->lineEdit->setStyleSheet(default_style);
            ui->lineEdit_2->setStyleSheet(lock_style);
        }
    }
    else
    {
        ui->lineEdit->setStyleSheet(default_style);
        ui->lineEdit_2->setStyleSheet(default_style);

        sql_database accessing_db;
        QString result_login = accessing_db.check_login_user(username, password);
        if (result_login == "OK")
        {
            ui->label_3->setStyleSheet(success_style_label);
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
