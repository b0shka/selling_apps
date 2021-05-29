#ifndef WINDOW_LOGIN_H
#define WINDOW_LOGIN_H

#include "../window_register/window_registration.h"

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
	void on_close_clicked();
	void on_hide_clicked();
	void on_lineEdit_returnPressed();
	void on_lineEdit_2_returnPressed();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	
private:
    Ui::window_login *ui;
    QString password;
    QString username;
	QPoint m_mousePoint;
};

#endif // WINDOW_LOGIN_H
