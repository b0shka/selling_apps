#ifndef MESSENGER_H
#define MESSENGER_H

#include <QDialog>
#include <QListWidgetItem>
#include <QMessageBox>
#include "../chat/chat.h"
#include "../sql_database/sql_database.h"

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
	void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
	void add_chats();
	void on_listWidget_itemClicked(QListWidgetItem *item);
	void on_pushButton_clicked();
	
private:
	Ui::messenger *ui;
	sql_database database;
	QString chat_name;
};

#endif // MESSENGER_H
