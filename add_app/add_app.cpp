#include "add_app.h"
#include "ui_add_app.h"

add_app::add_app(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_app)
{
    ui->setupUi(this);
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
}

add_app::~add_app()
{
    delete ui;
}

void add_app::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_mousePoint = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void add_app::mouseMoveEvent(QMouseEvent* event)
{
	if (event->buttons() & Qt::LeftButton )
	{
		move(event->globalPos() - m_mousePoint);
		event->accept();
	}
}

void add_app::on_pushButton_clicked()
{
    QString name_app = ui->lineEdit->text();
    QString description_app = ui->textEdit->toPlainText();
    QString price_app = ui->lineEdit_2->text();
    QString tech_app = ui->lineEdit_3->text();

    if (name_app == "" || price_app == "")
    {
        if (name_app == "")
            ui->lineEdit->setStyleSheet(lock_style_other_color);
        if (price_app == "")
            ui->lineEdit_2->setStyleSheet(lock_style_other_color);
        if (name_app != "")
            ui->lineEdit->setStyleSheet(default_style_other_color);
        if (price_app != "")
            ui->lineEdit_2->setStyleSheet(default_style_other_color);
    }
    else
    {
        ui->lineEdit->setStyleSheet(default_style_other_color);
        ui->lineEdit_2->setStyleSheet(default_style_other_color);

        QList<QString> param_app = {name_app, price_app, description_app, tech_app, g_user_name};
        QString result_add_app = database.add_new_app(param_app);

        if (result_add_app == "OK")
        {
            ui->label_5->setStyleSheet(success_style_label);
            ui->label_5->setText("Программа добавлена");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->textEdit->clear();
            ui->lineEdit_3->clear();
            database.get_max_price_app();
            database.get_min_price_app();
        }
        else if (result_add_app == "ERROR")
        {
            ui->label_5->setStyleSheet(error_style_label);
            ui->label_5->setText("Ошибка на сервере");
        }
    }
}

void add_app::on_pushButton_8_clicked()
{
    close();
}

void add_app::on_pushButton_9_clicked()
{
    showMinimized();
}
