#include "about_my_app.h"
#include "ui_about_my_app.h"

about_my_app::about_my_app(QList<QString> param_app, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about_my_app)
{
    ui->setupUi(this);
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	
    if (param_app[0].size() > 0)
    {
        app_name = param_app[0];
        ui->lineEdit->setText(param_app[0]);

        QList<QString> info_app = database.get_all_info_app_list_profile(param_app);
        ui->lineEdit_2->setText(info_app[0]);
        ui->textEdit->setPlainText(info_app[1]);
        ui->lineEdit_3->setText(info_app[2]);
    }
	
	ui->pushButton_2->setFocus();
}

about_my_app::~about_my_app()
{
    delete ui;
}

void about_my_app::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_mousePoint = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void about_my_app::mouseMoveEvent(QMouseEvent* event)
{
	if (event->buttons() & Qt::LeftButton )
	{
		move(event->globalPos() - m_mousePoint);
		event->accept();
	}
}

void about_my_app::on_pushButton_clicked()
{
    QMessageBox::Button reply = QMessageBox::question(this, "Подтверждение удаления", "Вы уверены?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
		int id_app = database.get_id_app(ui->lineEdit->text(), ui->lineEdit_2->text(), ui->textEdit->toPlainText(), ui->lineEdit_3->text());
		if (id_app != 0)
		{
			QString result_delete = database.delete_app_from_db(id_app);
			if (result_delete == "Success")
			{
				popUp = new popup();
				popUp->setPopupText("Программа удалена");
				popUp->show();
				close();
				g_status_delete_app = 1;
			}
		}
		else
		{
			popUp = new popup();
			popUp->setPopupText("Ошибка на стороне сервера");
			popUp->show();
		}
    }
}

void about_my_app::on_pushButton_2_clicked()
{
    QString new_name = ui->lineEdit->text();
	QString new_price = ui->lineEdit_2->text();
	
	QString check_new_name = new_name.replace(" ", "");
	QString check_new_price = new_price.replace(" ", "");
	
    if (check_new_name.size() == 0 && check_new_price.size() == 0)
	{
		ui->lineEdit->setFocus();
        ui->lineEdit->setStyleSheet(lock_style_other_color);
		ui->lineEdit_2->setStyleSheet(lock_style_other_color);
	}
	else if (check_new_name.size() == 0 || check_new_price.size() == 0)
	{
		if (check_new_name.size() == 0)
        {
			ui->lineEdit->setFocus();
            ui->lineEdit->setStyleSheet(lock_style_other_color);
            ui->lineEdit_2->setStyleSheet(default_style_other_color);
        }
        else
        {
			ui->lineEdit_2->setFocus();
            ui->lineEdit->setStyleSheet(default_style_other_color);
            ui->lineEdit_2->setStyleSheet(lock_style_other_color);
        }
	}
    else
    {
        ui->lineEdit->setStyleSheet(default_style_other_color);
		ui->lineEdit_2->setStyleSheet(default_style_other_color);

        QString new_description = ui->textEdit->toPlainText();
        QString app_technologes = ui->lineEdit_3->text();
        QString result_save = database.save_change_app({app_name, new_name, new_price, new_description, app_technologes});
        if (result_save != "ERROR")
        {
            g_status_change_app = 1;
            close();
			popUp = new popup();
			popUp->setPopupText("Данные сохранены");
			popUp->show();
		}
    }
}

void about_my_app::on_pushButton_8_clicked()
{
    close();
}

void about_my_app::on_pushButton_9_clicked()
{
    showMaximized();
}

void about_my_app::on_lineEdit_returnPressed()
{
    on_pushButton_2_clicked();
}

void about_my_app::on_lineEdit_2_returnPressed()
{
    on_pushButton_2_clicked();
}

void about_my_app::on_lineEdit_3_returnPressed()
{
    on_pushButton_2_clicked();
}
