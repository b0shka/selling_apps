#include "about_app.h"
#include "ui_about_app.h"
#include <QDebug>

about_app::about_app(QList<QString> param_app, QWidget *parent) : QDialog(parent), ui(new Ui::about_app)
{
    ui->setupUi(this);
    ui->label->setText(param_app[0]);
    ui->label_3->setText(param_app[1] + " руб");
    ui->label_5->setText(param_app[3]);
}

about_app::~about_app()
{
    delete ui;
}
