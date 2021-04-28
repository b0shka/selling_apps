#ifndef WINDOW_LOGIN_H
#define WINDOW_LOGIN_H

#include <QDialog>

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

private:
    Ui::window_login *ui;
};

#endif // WINDOW_LOGIN_H
