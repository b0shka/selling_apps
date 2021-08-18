#ifndef FILTER_SEARCH_H
#define FILTER_SEARCH_H

#include <QDialog>
#include <QMouseEvent>
#include <QPoint>
#include "../main_data/data.h"
#include "../sql_database/sql_database.h"
#include "../popup/popup.h"
#include "../main_data/logger.h"

namespace Ui {
class filter_search;
}

class filter_search : public QDialog
{
    Q_OBJECT

public:
    explicit filter_search(QWidget *parent = nullptr);
    ~filter_search();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void on_lineEdit_returnPressed();
	void on_lineEdit_2_returnPressed();
	void on_lineEdit_3_returnPressed();
	void on_lineEdit_4_returnPressed();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	
private:
    Ui::filter_search *ui;
    sql_database database;
	QPoint m_mousePoint;
	popup *popUp;
};

#endif // FILTER_SEARCH_H
