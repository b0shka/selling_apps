#ifndef ADD_APP_H
#define ADD_APP_H

#include <QDialog>
#include <QMouseEvent>
#include <QPoint>
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"
#include "../popup/popup.h"

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
	void on_lineEdit_returnPressed();
	void on_lineEdit_2_returnPressed();
	void on_lineEdit_3_returnPressed();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	
private:
    Ui::add_app *ui;
    sql_database database;
	popup *popUp;
	QPoint m_mousePoint;
};

#endif // ADD_APP_H
