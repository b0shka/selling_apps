#ifndef WINDOW_REGISTRATION_H
#define WINDOW_REGISTRATION_H

#include <QDialog>
#include <QMouseEvent>
#include <QPoint>
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"

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
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	
private:
    Ui::window_registration *ui;
	QPoint m_mousePoint;
};

#endif // WINDOW_REGISTRATION_H
