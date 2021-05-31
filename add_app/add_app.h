#ifndef ADD_APP_H
#define ADD_APP_H

#include <QDialog>
#include <QMouseEvent>
#include <QPoint>
#include <QFileDialog>
#include <QBuffer>
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
	void on_pushButton_2_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void on_pushButton_10_clicked();
	void on_pushButton_11_clicked();
	void on_pushButton_12_clicked();
	void on_lineEdit_returnPressed();
	void on_lineEdit_2_returnPressed();
	void on_lineEdit_3_returnPressed();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	bool eventFilter(QObject *watched, QEvent *event);
	
private:
    Ui::add_app *ui;
    sql_database database;
	popup *popUp;
	QPoint m_mousePoint;
	QPixmap one_Pixmap = QPixmap();
	QPixmap two_Pixmap = QPixmap();
	QPixmap three_Pixmap = QPixmap();
	int count_photo;
	QByteArray imageBytes1, imageBytes2, imageBytes3;
};

#endif // ADD_APP_H
