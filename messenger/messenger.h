#ifndef MESSENGER_H
#define MESSENGER_H

#include <QDialog>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPoint>
#include "../chat/chat.h"
#include "../sql_database/sql_database.h"
#include "../popup/popup.h"
#include "../main_data/logger.h"

namespace Ui {
class messenger;
}

class messenger : public QDialog
{
	Q_OBJECT
	
public:
	explicit messenger(QWidget *parent = nullptr);
	~messenger();
	
private slots:
	void on_pushButton_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
	void add_chats();
	void on_listWidget_itemClicked(QListWidgetItem *item);
	
private:
	Ui::messenger *ui;
	popup *popUp;
	sql_database database;
	QString chat_name;
	QPoint m_mousePoint;
};

#endif // MESSENGER_H
