#ifndef ABOUT_MY_APP_H
#define ABOUT_MY_APP_H

#include <QDialog>
#include <QMessageBox>
#include "../sql_database/sql_database.h"

namespace Ui {
class about_my_app;
}

class about_my_app : public QDialog
{
    Q_OBJECT

public:
    explicit about_my_app(QList<QString> info_app, QWidget *parent = nullptr);
    ~about_my_app();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::about_my_app *ui;
	sql_database database;
    QString app_name;
};

#endif // ABOUT_MY_APP_H
