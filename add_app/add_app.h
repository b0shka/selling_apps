#ifndef ADD_APP_H
#define ADD_APP_H

#include <QDialog>
#include "../sql_database/sql_database.h"
#include "../main_data/main_data.h"

namespace Ui {
class add_app;
}

class add_app : public QDialog
{
    Q_OBJECT

public:
    explicit add_app(QString user_name, QWidget *parent = nullptr);
    ~add_app();

private slots:
    void on_pushButton_clicked();

private:
    Ui::add_app *ui;
    sql_database database;
    main_data data;
    QString user_name;
};

#endif // ADD_APP_H
