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

        if (username.size() > 40)
        {
            ui->lineEdit->setStyleSheet(data.lock_style_other_color);
            ui->label_2->setStyleSheet(data.lock_style_label);
            ui->label_2->setText("Login слишком длинныйт");
        }
        else
        {
            sql_database accessing_db;
            QString result_register = accessing_db.register_new_user(username, password);
            if (result_register == "OK")
            {
                ui->label_2->setStyleSheet(data.success_style_label);
                ui->label_2->setText("Вы успешно зарегистрировались!");
                ui->lineEdit->setText("");
                ui->lineEdit_2->setText("");
                qDebug() << "[INFO] Успешная регистрация пользователя";
            }
            else if (result_register == "NOT")
            {
                ui->lineEdit->setStyleSheet(data.lock_style_other_color);
                ui->label_2->setStyleSheet(data.lock_style_label);
                ui->label_2->setText("Пользователь с таким login уже существует");
                qDebug() << "[INFO] Пользователь с таким login уже существует";
            }
            else if (result_register == "ERROR")
            {
                ui->label_2->setStyleSheet(data.error_style_label);
                ui->label_2->setText("Ошибка на стороне сервера");
            }
        }
    }
}
