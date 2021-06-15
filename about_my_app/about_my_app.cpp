#include "about_my_app.h"
#include "ui_about_my_app.h"

about_my_app::about_my_app(QList<QString> param_app, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about_my_app)
{
    ui->setupUi(this);
	popUp = new popup();
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	
	ui->pushButton_10->setHidden(true);
	ui->pushButton_11->setHidden(true);
	ui->pushButton_12->setHidden(true);
	
	add_info(param_app);
	
	ui->pushButton_2->setFocus();
}

about_my_app::~about_my_app()
{
	delete ui;
}

void about_my_app::add_info(QList<QString> param_app)
{
	if (param_app[0].size() > 0)
    {
        ui->lineEdit->setText(param_app[0]);

        QList<QString> info_app = database.get_all_info_app_list_profile(param_app);
		if (info_app[0] == "ERROR")
		{
			popUp->setPopupText("Ошибка на стороне сервера");
			popUp->show();
		}
		else
		{
			ui->lineEdit_2->setText(info_app[0]);
			ui->textEdit->setPlainText(info_app[1]);
			ui->lineEdit_3->setText(info_app[2]);
			
			QList<QByteArray> list_bytes_photo = database.get_bytes_photo(param_app[0], param_app[1]);
			if (list_bytes_photo.size() == 0)
			{
				popUp->setPopupText("Ошибка на стороне сервера");
				popUp->show();
			}
			else
			{
				imageBytes1 = list_bytes_photo[0];
				imageBytes2 = list_bytes_photo[1];
				imageBytes3 = list_bytes_photo[2];
				
				one_Pixmap.loadFromData(list_bytes_photo[0]);
				two_Pixmap.loadFromData(list_bytes_photo[1]);
				three_Pixmap.loadFromData(list_bytes_photo[2]);
				
				if (list_bytes_photo[0] != nullptr)
					ui->pushButton_10->setHidden(false);
				if (list_bytes_photo[1] != nullptr)
					ui->pushButton_11->setHidden(false);
				if (list_bytes_photo[2] != nullptr)
					ui->pushButton_12->setHidden(false);
				
				ui->label_10->setPixmap(one_Pixmap.scaled(166, 111));
				ui->label_11->setPixmap(two_Pixmap.scaled(166, 111));
				ui->label_12->setPixmap(three_Pixmap.scaled(166, 111));
			}
		}
	}
	
	get_views(g_user_name, param_app[0]);
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

void about_my_app::get_views(QString login, QString name_app)
{
	int count_views = database.get_count_views_in_app(login, name_app);
	if (count_views != -1)
		ui->label_14->setText(QString::number(count_views));
	else
		ui->label_13->clear();
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
				popUp->setPopupText("Программа удалена");
				popUp->show();
				close();
				g_status_delete_app = 1;
			}
			else
			{
				popUp->setPopupText("Ошибка на стороне сервера");
				popUp->show();
			}
		}
		else
		{
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
        QString result_save = database.save_change_app({app_name, new_name, new_price, new_description, app_technologes}, imageBytes1, imageBytes2, imageBytes3);
		
        if (result_save != "ERROR")
        {
            g_status_change_app = 1;
            close();
			popUp = new popup();
			popUp->setPopupText("Данные сохранены");
			popUp->show();
		}
		else
		{
			popUp->setPopupText("Ошибка на стороне сервера");
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
    showMinimized();
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

void about_my_app::on_pushButton_10_clicked()
{
	if (two_Pixmap.isNull())
	{
		ui->label_10->clear();
		ui->pushButton_10->setHidden(true);
		one_Pixmap.loadFromData(nullptr);
		imageBytes1.clear();
	}
	else
	{
		ui->label_10->setPixmap(two_Pixmap.scaled(166, 111));
		if (three_Pixmap.isNull())
		{
			two_Pixmap.loadFromData(nullptr);
			imageBytes2.clear();
		}
	}
	if (three_Pixmap.isNull())
	{
		ui->label_11->clear();
		ui->pushButton_11->setHidden(true);
	}
	else
	{
		ui->label_11->setPixmap(three_Pixmap.scaled(166, 111));
		ui->label_12->clear();
		ui->pushButton_12->setHidden(true);
		two_Pixmap = three_Pixmap;
		three_Pixmap.loadFromData(nullptr);
		imageBytes3.clear();
	}
}

void about_my_app::on_pushButton_11_clicked()
{
	if (three_Pixmap.isNull())
	{
		ui->label_11->clear();
		ui->pushButton_11->setHidden(true);
		two_Pixmap.loadFromData(nullptr);
		imageBytes2.clear();
	}
	else
	{
		ui->label_11->setPixmap(three_Pixmap.scaled(166, 111));
		ui->label_12->clear();
		ui->pushButton_12->setHidden(true);
		two_Pixmap = three_Pixmap;
		three_Pixmap.loadFromData(nullptr);
		imageBytes3.clear();
	}
}

void about_my_app::on_pushButton_12_clicked()
{
	ui->label_12->clear();
	ui->pushButton_12->setHidden(true);
	three_Pixmap.loadFromData(nullptr);
}

void about_my_app::on_pushButton_3_clicked()
{
	QString filename = QFileDialog::getOpenFileName(this,
		tr("Choose image"), "", tr("Image Files (*.png *.jpg *.bmp)"));
	if (filename != nullptr)
	{
		if (one_Pixmap.isNull())
			count_photo = 0;
		else if (two_Pixmap.isNull())
			count_photo = 1;
		else if (three_Pixmap.isNull())
			count_photo = 2;
		else
			count_photo = 3;
		
		if (count_photo == 0 || count_photo == 3)
		{
			one_Pixmap.load(filename);
			ui->label_10->setPixmap(one_Pixmap.scaled(166, 111));
			QBuffer buffer(&imageBytes1);
			buffer.open(QIODevice::WriteOnly);
			if (filename.split(".")[1] == "png")
				one_Pixmap.save(&buffer, "PNG");
			else if (filename.split(".")[1] == "jpg" || filename.split(".")[1] == "jpeg")
				one_Pixmap.save(&buffer, "JPG");
			ui->pushButton_10->setHidden(false);
		}
		else if (count_photo == 1)
		{
			two_Pixmap.load(filename);
			ui->label_11->setPixmap(two_Pixmap.scaled(166, 111));
			QBuffer buffer(&imageBytes2);
			buffer.open(QIODevice::WriteOnly);
			if (filename.split(".")[1] == "png")
				two_Pixmap.save(&buffer, "PNG");
			else if (filename.split(".")[1] == "jpg" || filename.split(".")[1] == "jpeg")
				two_Pixmap.save(&buffer, "JPG");
			ui->pushButton_11->setHidden(false);
		}
		else if (count_photo == 2)
		{
			three_Pixmap.load(filename);
			ui->label_12->setPixmap(three_Pixmap.scaled(166, 111));
			count_photo = 0;
			QBuffer buffer(&imageBytes3);
			buffer.open(QIODevice::WriteOnly);
			if (filename.split(".")[1] == "png")
				three_Pixmap.save(&buffer, "PNG");
			else if (filename.split(".")[1] == "jpg" || filename.split(".")[1] == "jpeg")
				three_Pixmap.save(&buffer, "JPG");
			ui->pushButton_12->setHidden(false);
		}
	}
}
