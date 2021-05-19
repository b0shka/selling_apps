#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <QTime>
#include <QListWidgetItem>
#include <QThread>
#include "client.h"
#include "../main_data/data.h"

namespace Ui {
class chat;
}

class chat : public QDialog
{
    Q_OBJECT

public:
    explicit chat(QWidget *parent = nullptr);
    ~chat();
	
private slots:
	void on_pushButton_clicked();
	void add_message_to_listwidget(QString message);
	void read_message();
	
private:
    Ui::chat *ui;
	Client client;
};

#endif // CHAT_H
