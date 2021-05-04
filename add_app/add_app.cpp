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
    QString success_style_label = "font-size: 14px;"
                                  "color: #93edd2";
    QString error_style_label = "font-size: 14px;"
                                "color: #ffc552";

    if (name_app == "" || price_app == "")
    {
        if (name_app == "")
            ui->lineEdit->setStyleSheet(lock_style);
        else
            ui->lineEdit_2->setStyleSheet(lock_style);
    }
    else
    {
        ui->lineEdit->setStyleSheet(default_style);
        ui->lineEdit_2->setStyleSheet(default_style);

        QList<QString> param_app = {name_app, price_app, description_app, user_name};
        QString result_add_app = database.add_new_app(param_app);

        if (result_add_app == "OK")
        {
            ui->label_5->setStyleSheet(success_style_label);
            ui->label_5->setText("Программа добавлена");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->textEdit->clear();
        }
        else if (result_add_app == "ERROR")
        {
            ui->label_5->setStyleSheet(error_style_label);
            ui->label_5->setText("Ошибка на сервере");
        }
    }
}
