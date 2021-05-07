﻿#include "about_my_app.h"
#include "ui_about_my_app.h"

about_my_app::about_my_app(QList<QString> param_app, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about_my_app)
{
    ui->setupUi(this);
    app_name = param_app[0];
	ui->lineEdit->setText(param_app[0]);
	QList<QString> info_app = database.get_all_info_app_list_profile(param_app);
	ui->lineEdit_2->setText(info_app[0]);
	ui->textEdit->setPlainText(info_app[1]);
}

about_my_app::~about_my_app()
{
    delete ui;
}

void about_my_app::on_pushButton_clicked()
{
    QMessageBox::Button reply = QMessageBox::question(this, "Подтверждение удаления", "Вы уверены?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        QString result_delete = database.delete_app_from_db(ui->lineEdit->text());
        if (result_delete == "Success")
        {
            QMessageBox::information(this, "Уведомление", "Программа удалена");
            close();
            g_status_delete_app = 1;
        }
    }
}

void about_my_app::on_pushButton_2_clicked()
{
    QString new_name = ui->lineEdit->text();

    if (new_name == "")
        ui->lineEdit->setStyleSheet(lock_style_other_color);
    else
    {
        ui->lineEdit->setStyleSheet(default_style_other_color);

        QString new_price = ui->lineEdit_2->text();
        QString new_description = ui->textEdit->toPlainText();
        QString result_save = database.save_change_app({app_name, new_name, new_price, new_description});
        if (result_save != "ERROR")
        {
            QMessageBox::information(this, "Уведомление", "Данные сохранены");
            g_status_change_app = 1;
            close();
        }
    }
}
