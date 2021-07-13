#include "window_login.h"
#include "ui_window_login.h"

window_login::window_login(QWidget *parent) : QDialog(parent), ui(new Ui::window_login)
{
    ui->setupUi(this);
	popUp = new popup();
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	
	ui->lineEdit->setFocus();
}

window_login::~window_login()
{
    delete ui;
}

void window_login::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_mousePoint = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void window_login::mouseMoveEvent(QMouseEvent* event)
{
	if (event->buttons() & Qt::LeftButton)
	{
		move(event->globalPos() - m_mousePoint);
		event->accept();
	}
}

void window_login::on_pushButton_clicked()
{
    username = ui->lineEdit->text();
    password = ui->lineEdit_2->text();
	
	QString check_username = username.replace(" ", "");
	QString check_password = password.replace(" ", "");

	if (check_username.size() == 0 || check_password.size() == 0)
	{
		if (check_username.size() == 0)
		{
			ui->lineEdit->setFocus();
			ui->lineEdit->setStyleSheet(lock_style_other_color);
		}
		else
			ui->lineEdit->setStyleSheet(default_style_other_color);
		
		if (check_password.size() == 0)
		{
			if (check_username.size() == 0)
				ui->lineEdit->setFocus();
			else
				ui->lineEdit_2->setFocus();
			ui->lineEdit_2->setStyleSheet(lock_style_other_color);
		}
		else
			ui->lineEdit_2->setStyleSheet(default_style_other_color);
	}
    else
    {
        ui->lineEdit->setStyleSheet(default_style_other_color);
        ui->lineEdit_2->setStyleSheet(default_style_other_color);

        QString crypt_password = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Md5).toHex();

        sql_database accessing_db;
        QString result_login = accessing_db.check_login_user(username, crypt_password);
        if (result_login == "OK")
        {
            ui->lineEdit->setText("");
            ui->lineEdit_2->setText("");
            g_status_autorization = 1;
			popUp->setPopupText("Вы авторизовались");
			popUp->show();
            qDebug(logDebug) << "Авторизация пользователя";
            close();
        }
        if (result_login == "NOT")
        {
			qDebug(logDebug) << "Не верный login или password";
            ui->label_3->setStyleSheet(lock_style_label);
            ui->label_3->setText("Не верный login или password");
        }
        else if (result_login == "ERROR")
        {
			qDebug(logError) << "Авторизация пользователя";
            ui->label_3->setStyleSheet(error_style_label);
            ui->label_3->setText("Ошибка на стороне сервера");
        }
    }
}

void window_login::on_pushButton_2_clicked()
{
    close();
    window_registration registration;
    registration.setModal(true);
    registration.exec();
}

void window_login::on_close_clicked()
{
    close();
}

void window_login::on_hide_clicked()
{
	showMinimized();
}

void window_login::on_lineEdit_returnPressed()
{
    on_pushButton_clicked();
}

void window_login::on_lineEdit_2_returnPressed()
{
    on_pushButton_clicked();
}
