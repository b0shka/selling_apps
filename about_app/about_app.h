#ifndef ABOUT_APP_H
#define ABOUT_APP_H

#include <QDialog>
#include "../developper_app/developper_app.h"

namespace Ui {
class about_app;
}

class about_app : public QDialog
{
    Q_OBJECT

public:
    explicit about_app(QList<QString> name_app, QWidget *parent = nullptr);
    ~about_app();

private slots:
    void on_pushButton_clicked();

private:
    Ui::about_app *ui;
};

#endif // ABOUT_APP_H
