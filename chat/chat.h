#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include "client.h"

namespace Ui {
class chat;
}

class chat : public QDialog
{
    Q_OBJECT

public:
    explicit chat(QWidget *parent = nullptr);
    ~chat();
	QString message = "";
	
public slots:
	void connection();
	void disconnection();
	
private slots:
	void on_pushButton_clicked();
	
private:
    Ui::chat *ui;
	Client client;
};

#endif // CHAT_H
