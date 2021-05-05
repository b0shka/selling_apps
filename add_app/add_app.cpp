#include "add_app.h"
#include "ui_add_app.h"

add_app::add_app(QString user_name, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_app)
{
    ui->setupUi(this);
    this->user_name = user_name;
}

add_app::~add_app()
{
    delete ui;
}

void add_app::on_pushButton_clicked()
{
    QString name_app = ui->lineEdit->text();
    QString description_app = ui->textEdit->toPlainText();
    QString price_app = ui->lineEdit_2->text();

    if (name_app == "" || price_app == "")
    {
        if (name_app == "")
            ui->lineEdit->setStyleSheet(data.lock_style_other_color);
        if (price_app == "")
            ui->lineEdit_2->setStyleSheet(data.lock_style_other_color);
        if (name_app != "")
            ui->lineEdit->setStyleSheet(data.default_style_other_color);
        if (price_app != "")
            ui->lineEdit_2->setStyleSheet(data.default_style_other_color);
    }
    else
    {
        ui->lineEdit->setStyleSheet(data.default_style_other_color);
        ui->lineEdit_2->setStyleSheet(data.default_style_other_color);

        QList<QString> param_app = {name_app, price_app, description_app, user_name};
        QString result_add_app = database.add_new_app(param_app);

        if (result_add_app == "OK")
        {
            ui->label_5->setStyleSheet(data.success_style_label);
            ui->label_5->setText("Программа добавлена");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->textEdit->clear();
        }
        else if (result_add_app == "ERROR")
        {
            ui->label_5->setStyleSheet(data.error_style_label);
            ui->label_5->setText("Ошибка на сервере");
        }
    }
}
