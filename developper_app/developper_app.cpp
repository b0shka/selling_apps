#include "developper_app.h"
#include "ui_developper_app.h"
#include "../user_apps/user_apps.h"
#include "../chat/chat.h"

developper_app::developper_app(QString login , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::developper_app)
{
    ui->setupUi(this);
	popUp = new popup();
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	
    ui->label_7->setText(login.split(" ")[0]);
    user_name_dev = login;
	
	if (g_status_autorization == 0)
		ui->pushButton_3->setHidden(true);
	
    get_info_from_db(login);
}

developper_app::~developper_app()
{
    delete ui;
}

void developper_app::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        m_mousePoint = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void developper_app::mouseMoveEvent(QMouseEvent* event)
{
	if (event->buttons() & Qt::LeftButton )
	{
		move(event->globalPos() - m_mousePoint);
		event->accept();
	}
}

void developper_app::get_info_from_db(QString login)
{
    QList<QString> data = developer_info.get_info_for_profile(login);
    if (data.at(0) != "ERROR")
    {
        ui->label_2->setText(data.at(0));
        ui->label_8->setText(data.at(1));
        ui->label_9->setText(data.at(2));
    }
	else
	{
		qDebug(logError) << "Получение информации для профиля";
		popUp->setPopupText("Ошибка на стороне сервера");
		popUp->show();
	}

    QString count_app = developer_info.get_count_apps(login);
    if (count_app != "ERROR")
        ui->pushButton_2->setText(count_app);
	else
	{
		qDebug(logError) << "Получение количества программ";
		popUp->setPopupText("Ошибка на стороне сервера");
		popUp->show();
	}

    QString count_star = developer_info.get_all_star_for_profile(login);
    if (count_app != "ERROR")
        ui->label_12->setText(count_star);
	else
	{
		qDebug(logError) << "Получение количества звезд";
		popUp->setPopupText("Ошибка на стороне сервера");
		popUp->show();
	}
}

void developper_app::on_pushButton_2_clicked()
{
    close();
    user_apps app_dev(user_name_dev);
    app_dev.setModal(true);
    app_dev.exec();
}

void developper_app::on_pushButton_3_clicked()
{
	close();
	chat chat_dev(user_name_dev);
    chat_dev.setModal(true);
    chat_dev.exec();
}

void developper_app::on_pushButton_8_clicked()
{
    close();
}

void developper_app::on_pushButton_9_clicked()
{
    showMinimized();
}
