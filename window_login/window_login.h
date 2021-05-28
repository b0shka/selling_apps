#ifndef WINDOW_LOGIN_H
#define WINDOW_LOGIN_H

#include <QDialog>
#include <QMouseEvent>
#include <QPoint>
#include "../window_register/window_registration.h"
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"

namespace Ui {
class window_login;
}

class window_login : public QDialog
{
    Q_OBJECT

public:
    explicit window_login(QWidget *parent = nullptr);
    ~window_login();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	
private:
    Ui::window_login *ui;
    QString password;
    QString username;
	QPoint m_mousePoint;
};

#endif // WINDOW_LOGIN_H
