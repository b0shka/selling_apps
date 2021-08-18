#include "add_app.h"
#include "ui_add_app.h"

add_app::add_app(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_app)
{
    ui->setupUi(this);
	popUp = new popup();
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	
	ui->pushButton_10->setHidden(true);
	ui->pushButton_11->setHidden(true);
	ui->pushButton_12->setHidden(true);
	
	QObject::connect(ui->label_2, SIGNAL(clicked(const QString& text)),
					 ui->lineEdit, SLOT(setText(const QString& text)));
	
	ui->lineEdit->setFocus();
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
    QString price_app = ui->lineEdit_2->text();
	
	QString check_name_app = name_app.replace(" ", "");
	QString check_price_app = price_app.replace(" ", "");

    if (check_name_app.size() == 0 || check_price_app.size() == 0)
    {
        if (check_name_app.size() == 0)
		{
			ui->lineEdit->setFocus();
            ui->lineEdit->setStyleSheet(lock_style_other_color);
		}
		else
			ui->lineEdit->setStyleSheet(default_style_other_color);
		
        if (check_price_app.size() == 0)
		{
			if (check_name_app.size() == 0)
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
		
		QString description_app = ui->textEdit->toPlainText();
		QString tech_app = ui->lineEdit_3->text();

        QList<QString> param_app = {name_app, price_app, description_app, tech_app, g_user_name};
        QString result_add_app = database.add_new_app(param_app, imageBytes1, imageBytes2, imageBytes3);

        if (result_add_app == "OK")
        {
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->textEdit->clear();
            ui->lineEdit_3->clear();
            database.get_max_price_app();
            database.get_min_price_app();
			close();
			
			qDebug(logDebug) << "Добавление программы";
			popUp->setPopupText("Программа добавлена");
			popUp->show();
        }
        else if (result_add_app == "ERROR")
        {
			qDebug(logError) << "Добавление программы";
            ui->label_5->setStyleSheet(error_style_label);
            ui->label_5->setText("Ошибка на сервере");
        }
    }
}

bool add_app::eventFilter(QObject *watched, QEvent *event)
{
	qDebug() << watched;
    if (watched == ui->label_2)
    {
        if(event->type() == QEvent::MouseButtonPress)
            qDebug() << event->type();
    }
    
    return false;
}

void add_app::on_pushButton_8_clicked()
{
    close();
}

void add_app::on_pushButton_9_clicked()
{
    showMinimized();
}

void add_app::on_lineEdit_returnPressed()
{
    on_pushButton_clicked();
}

void add_app::on_lineEdit_2_returnPressed()
{
    on_pushButton_clicked();
}

void add_app::on_lineEdit_3_returnPressed()
{
    on_pushButton_clicked();
}

void add_app::on_pushButton_2_clicked()
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

        int width = ui->label_2->width();
        int height = ui->label_2->height();
		
		if (count_photo == 0 || count_photo == 3)
		{
			one_Pixmap.load(filename);
            ui->label_2->setPixmap(one_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
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
            ui->label_3->setPixmap(two_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
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
            ui->label_4->setPixmap(three_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
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

void add_app::on_pushButton_10_clicked()
{
    int width = ui->label_2->width();
    int height = ui->label_2->height();

	if (two_Pixmap.isNull())
	{
		ui->label_2->clear();
		ui->pushButton_10->setHidden(true);
		one_Pixmap.loadFromData(nullptr);
		imageBytes1.clear();
	}
	else
	{
        ui->label_2->setPixmap(two_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
		if (three_Pixmap.isNull())
		{
			two_Pixmap.loadFromData(nullptr);
			imageBytes2.clear();
		}
	}
	if (three_Pixmap.isNull())
	{
		ui->label_3->clear();
		ui->pushButton_11->setHidden(true);
	}
	else
	{
        ui->label_3->setPixmap(three_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
		ui->label_4->clear();
		ui->pushButton_12->setHidden(true);
		two_Pixmap = three_Pixmap;
		three_Pixmap.loadFromData(nullptr);
		imageBytes3.clear();
	}
}

void add_app::on_pushButton_11_clicked()
{
    int width = ui->label_3->width();
    int height = ui->label_2->height();

	if (three_Pixmap.isNull())
	{
		ui->label_3->clear();
		ui->pushButton_11->setHidden(true);
		two_Pixmap.loadFromData(nullptr);
		imageBytes2.clear();
	}
	else
	{
        ui->label_3->setPixmap(three_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
		ui->label_4->clear();
		ui->pushButton_12->setHidden(true);
		two_Pixmap = three_Pixmap;
		three_Pixmap.loadFromData(nullptr);
		imageBytes3.clear();
	}
}

void add_app::on_pushButton_12_clicked()
{
	ui->label_4->clear();
	ui->pushButton_12->setHidden(true);
	three_Pixmap.loadFromData(nullptr);
}
