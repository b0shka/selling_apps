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

        if (username == "user" && password == "123")
        {

        }
        else
        {

        }
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
    }
}

void window_login::on_pushButton_2_clicked()
{
    close();
    window_registration registration;
    registration.setModal(true);
    registration.exec();
}
