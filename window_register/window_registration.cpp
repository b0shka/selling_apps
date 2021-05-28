#include "window_registration.h"
#include "ui_window_registration.h"
#include <QCryptographicHash>

window_registration::window_registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::window_registration)
{
    ui->setupUi(this);
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
}

window_registration::~window_registration()
{
    delete ui;
}

void window_registration::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_mousePoint = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void window_registration::mouseMoveEvent(QMouseEvent* event)
{
	if (event->buttons() & Qt::LeftButton )
	{
		move(event->globalPos() - m_mousePoint);
		event->accept();
	}
}

void window_registration::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if (username == "" && password == "")
    {
        ui->lineEdit->setStyleSheet(lock_style_other_color);
        ui->lineEdit_2->setStyleSheet(lock_style_other_color);
    }
    else if (username == "" || password == "")
    {
        if (username == "")
        {
            ui->lineEdit->setStyleSheet(lock_style_other_color);
            ui->lineEdit_2->setStyleSheet(default_style_other_color);
        }
        else
        {
            ui->lineEdit->setStyleSheet(default_style_other_color);
            ui->lineEdit_2->setStyleSheet(lock_style_other_color);
        }
    }
    else
    {
        ui->lineEdit->setStyleSheet(default_style_other_color);
        ui->lineEdit_2->setStyleSheet(default_style_other_color);

        if (username.size() > 40)
        {
            ui->lineEdit->setStyleSheet(lock_style_other_color);
            ui->label_2->setStyleSheet(lock_style_label);
            ui->label_2->setText("Login слишком длинныйт");
        }
        else
        {
            QString crypt_password = QCryptographicHash::hash(password.toUtf8(),QCryptographicHash::Md5).toHex();

            sql_database accessing_db;
            QString result_register = accessing_db.register_new_user(username, crypt_password);
            if (result_register == "OK")
            {
                ui->label_2->setStyleSheet(success_style_label);
                ui->label_2->setText("Вы успешно зарегистрировались!");
                ui->lineEdit->setText("");
                ui->lineEdit_2->setText("");
                qDebug() << "[INFO] Успешная регистрация пользователя";
            }
            else if (result_register == "NOT")
            {
                ui->lineEdit->setStyleSheet(lock_style_other_color);
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
}

void window_registration::on_pushButton_8_clicked()
{
    close();
}

void window_registration::on_pushButton_9_clicked()
{
	showMinimized();
}
