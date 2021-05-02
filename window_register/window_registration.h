#ifndef WINDOW_REGISTRATION_H
#define WINDOW_REGISTRATION_H

#include <QDialog>
#include "../sql_database/sql_database.h"

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

private:
    Ui::window_registration *ui;
};

#endif // WINDOW_REGISTRATION_H
