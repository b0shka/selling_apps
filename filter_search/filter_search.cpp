#include "filter_search.h"
#include "ui_filter_search.h"

filter_search::filter_search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filter_search)
{
    ui->setupUi(this);

    database.get_max_price_app();

    if (g_max_price == 0)
        ui->lineEdit->setText("");
    else
        ui->lineEdit->setText(QString::number(g_max_price));
    ui->lineEdit_2->setText(QString::number(g_min_price));
    ui->lineEdit_3->setText(g_technloges);
    ui->lineEdit_4->setText(g_description);
}

filter_search::~filter_search()
{
    delete ui;
}

void filter_search::on_pushButton_clicked()
{
    g_max_price = ui->lineEdit->text().toInt();
    g_min_price = ui->lineEdit_2->text().toInt();
    g_technloges = ui->lineEdit_3->text();
    g_description = ui->lineEdit_4->text();

    ui->label_3->setStyleSheet(success_style_label);
    ui->label_3->setText("Фильтры применены");
    close();
}

void filter_search::on_pushButton_2_clicked()
{
    database.get_max_price_app();
    g_min_price = 0;
    g_technloges = "";
    g_description = "";

    ui->label_3->setStyleSheet(success_style_label);
    ui->label_3->setText("Фильтры сброшены");

    if (g_max_price == 0)
        ui->lineEdit->setText("");
    else
        ui->lineEdit->setText(QString::number(g_max_price));
    ui->lineEdit_2->setText(QString::number(g_min_price));
    ui->lineEdit_3->setText(g_technloges);
    ui->lineEdit_4->setText(g_description);
}
