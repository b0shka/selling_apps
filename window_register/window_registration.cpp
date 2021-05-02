#include "window_registration.h"
#include "ui_window_registration.h"

window_registration::window_registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window_registration)
{
    ui->setupUi(this);
}

window_registration::~window_registration()
{
    delete ui;
}

void window_registration::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

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
        accessing_db.create_new_table();
        QString result_register = accessing_db.register_new_user(username, password);
        if (result_register == "OK")
        {
            ui->label_2->setStyleSheet(success_style_label);
            ui->label_2->setText("Вы зарегестрировались!");
            ui->lineEdit->setText("");
            ui->lineEdit_2->setText("");
            qDebug() << "[INFO] Успешная регистрация пользователя";
        }
        else if (result_register == "NOT")
        {
            ui->lineEdit->setStyleSheet(lock_style);
            ui->label_2->setStyleSheet(lock_style_label);
            ui->label_2->setText("Пользователь с таким login уже существует");
            qDebug() << "[INFO] Пользователь с таким login уже существует";
        }
        else if (result_register == "ERROR")
        {
            ui->label_2->setStyleSheet(error_style_label);
            ui->label_2->setText("Ошибка на стороне сервера");
        }
    }
}
