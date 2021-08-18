#ifndef USER_APPS_H
#define USER_APPS_H

#include <QDialog>
#include <QListWidgetItem>
#include <QMouseEvent>
#include <QPoint>
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"
#include "../popup/popup.h"
#include "../main_data/logger.h"

namespace Ui {
class user_apps;
}

class user_apps : public QDialog
{
    Q_OBJECT

public:
    explicit user_apps(QString login, QWidget *parent = nullptr);
    ~user_apps();

private slots:
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
    void add_apps_to_listWidget(QList<QString> list_apps);
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
	
private:
    Ui::user_apps *ui;
    sql_database database;
    QString login;
	QPoint m_mousePoint;
	popup *popUp;
};

#endif // USER_APPS_H
