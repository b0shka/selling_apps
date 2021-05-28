#include "filter_search.h"
#include "ui_filter_search.h"

filter_search::filter_search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filter_search)
{
    ui->setupUi(this);
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);

    ui->lineEdit->setText(QString::number(g_max_price));
    ui->lineEdit_2->setText(QString::number(g_min_price));
    ui->lineEdit_3->setText(g_technloges);
    ui->lineEdit_4->setText(g_description);
}

filter_search::~filter_search()
{
    delete ui;
}

void filter_search::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_mousePoint = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void filter_search::mouseMoveEvent(QMouseEvent* event)
{
	if (event->buttons() & Qt::LeftButton )
	{
		move(event->globalPos() - m_mousePoint);
		event->accept();
	}
}

void filter_search::on_pushButton_clicked()
{
    if (ui->lineEdit_2->text().toInt() > ui->lineEdit->text().toInt())
    {
        ui->lineEdit_2->setStyleSheet(lock_style_other_color);
        ui->label_3->setStyleSheet(lock_style_label);
        ui->label_3->setText("Минимальная больше максимальной");
    }
    else
    {
        g_max_price = ui->lineEdit->text().toInt();
        g_min_price = ui->lineEdit_2->text().toInt();
        g_technloges = ui->lineEdit_3->text();
        g_description = ui->lineEdit_4->text();

        ui->lineEdit_2->setStyleSheet(default_style_other_color);
        ui->label_3->setStyleSheet(success_style_label);
        ui->label_3->setText("Фильтры применены");
        close();
    }
}

void filter_search::on_pushButton_2_clicked()
{
    database.get_max_price_app();
    database.get_min_price_app();
    g_technloges = "";
    g_description = "";

    ui->lineEdit_2->setStyleSheet(default_style_other_color);
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

void filter_search::on_pushButton_8_clicked()
{
    close();
}

void filter_search::on_pushButton_9_clicked()
{
    showMinimized();
}
