#ifndef ABOUT_MY_APP_H
#define ABOUT_MY_APP_H

#include <QDialog>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPoint>
#include "../sql_database/sql_database.h"
#include "../popup/popup.h"

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
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	
private:
    Ui::about_my_app *ui;
	sql_database database;
	popup *popUp;
    QString app_name;
	QPoint m_mousePoint;
};

#endif // ABOUT_MY_APP_H
