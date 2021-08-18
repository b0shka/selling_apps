#ifndef FAVORITE_APP_H
#define FAVORITE_APP_H

#include <QDialog>
#include <QListWidgetItem>
#include <QMouseEvent>
#include <QPoint>
#include "../sql_database/sql_database.h"
#include "../popup/popup.h"
#include "../main_data/logger.h"

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
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
    void add_apps_to_listWidget(QList<QList<QString>> list_apps);
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
	
private:
    Ui::favorite_app *ui;
    sql_database database;
    QString login;
	QPoint m_mousePoint;
	popup *popUp;
};

#endif // FAVORITE_APP_H
