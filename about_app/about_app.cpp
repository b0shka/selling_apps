#include "about_app.h"
#include "ui_about_app.h"

about_app::about_app(QList<QString> name_app, QWidget *parent) : QDialog(parent), ui(new Ui::about_app)
{
    ui->setupUi(this);
    ui->label->setText(name_app[0]);
}

about_app::~about_app()
{
    delete ui;
}
