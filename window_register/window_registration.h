#ifndef WINDOW_REGISTRATION_H
#define WINDOW_REGISTRATION_H

#include <QDialog>
#include <QMouseEvent>
#include <QPoint>
#include <QCryptographicHash>
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"
#include "../popup/popup.h"
#include "../main_data/logger.h"


namespace Ui {
class window_registration;
}

class window_registration : public QDialog
{
    Q_OBJECT

public:
    explicit window_registration(QWidget *parent = nullptr);
    ~window_registration();

private slots:
    void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	void on_close_clicked();
	void on_hide_clicked();
	void on_lineEdit_returnPressed();
	void on_lineEdit_2_returnPressed();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	
private:
    Ui::window_registration *ui;
	QString password;
    QString username;
	QPoint m_mousePoint;
	popup *popUp;
};

#endif // WINDOW_REGISTRATION_H
