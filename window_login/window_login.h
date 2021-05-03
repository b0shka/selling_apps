#ifndef WINDOW_LOGIN_H
#define WINDOW_LOGIN_H

#include <QDialog>
#include "../window_register/window_registration.h"
#include "../sql_database/sql_database.h"

namespace Ui {
class window_login;
}

class window_login : public QDialog
{
    Q_OBJECT

public:
    explicit window_login(QWidget *parent = nullptr);
    ~window_login();
    int status_autorization = 0;
    QString username;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::window_login *ui;
    QString password;
};

#endif // WINDOW_LOGIN_H
