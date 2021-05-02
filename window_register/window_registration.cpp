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
        accessing_db.register_new_user(username, password);

        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
    }
}
