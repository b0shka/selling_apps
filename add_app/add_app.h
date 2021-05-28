#ifndef ADD_APP_H
#define ADD_APP_H

#include <QDialog>
#include <QMouseEvent>
#include <QPoint>
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"

namespace Ui {
class add_app;
}

class add_app : public QDialog
{
    Q_OBJECT

public:
    explicit add_app(QWidget *parent = nullptr);
    ~add_app();

private slots:
    void on_pushButton_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	
private:
    Ui::add_app *ui;
    sql_database database;
	QPoint m_mousePoint;
};

#endif // ADD_APP_H
