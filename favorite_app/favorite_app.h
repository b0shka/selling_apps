#ifndef FAVORITE_APP_H
#define FAVORITE_APP_H

#include <QDialog>
#include <QListWidgetItem>
#include "../sql_database/sql_database.h"

namespace Ui {
class favorite_app;
}

class favorite_app : public QDialog
{
    Q_OBJECT

public:
    explicit favorite_app(QWidget *parent = nullptr);
    ~favorite_app();

private slots:
    void add_apps_to_listWidget(QList<QList<QString>> list_apps);
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::favorite_app *ui;
    sql_database database;
    QString login;
};

#endif // FAVORITE_APP_H
