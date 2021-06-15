/********************************************************************************
** Form generated from reading UI file 'autorization_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORIZATION_MAINWINDOW_H
#define UI_AUTORIZATION_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_autorization_mainwindow
{
public:
    QFrame *frame_2;
    QFrame *frame;
    QLineEdit *lineEdit;
    QPushButton *favorite;
    QPushButton *profile;
    QLabel *label;
    QPushButton *filter;
    QPushButton *messages;
    QPushButton *update;
    QLabel *label_8;
    QListWidget *listWidget;
    QPushButton *add;
    QFrame *frame_4;
    QPushButton *close;
    QPushButton *hide;
    QLabel *label_2;

    void setupUi(QDialog *autorization_mainwindow)
    {
        if (autorization_mainwindow->objectName().isEmpty())
            autorization_mainwindow->setObjectName(QStringLiteral("autorization_mainwindow"));
        autorization_mainwindow->resize(679, 462);
        autorization_mainwindow->setMinimumSize(QSize(679, 462));
        autorization_mainwindow->setMaximumSize(QSize(679, 462));
        frame_2 = new QFrame(autorization_mainwindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 681, 466));
        frame_2->setMinimumSize(QSize(681, 2));
        frame_2->setMaximumSize(QSize(681, 471));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"	color: white;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 30, 671, 56));
        frame->setStyleSheet(QStringLiteral("background-color: #404040"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 206, 36));
        QFont font;
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QLatin1String("padding:2px 5px;\n"
"background-color: #2a2a2a;\n"
"border-radius: 5px;\n"
"border: none;\n"
"font-size: 14px;\n"
"color: white;"));
        lineEdit->setClearButtonEnabled(true);
        favorite = new QPushButton(frame);
        favorite->setObjectName(QStringLiteral("favorite"));
        favorite->setGeometry(QRect(355, 10, 111, 36));
        favorite->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: white;\n"
"	font-size: 14px;\n"
"	background-color: #2a2a2a;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        profile = new QPushButton(frame);
        profile->setObjectName(QStringLiteral("profile"));
        profile->setGeometry(QRect(620, 10, 36, 36));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        profile->setFont(font1);
        profile->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 18px;\n"
"	color: black;\n"
"	background-color: #6accc1;\n"
"	border-radius: 18px;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(475, 20, 136, 16));
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        filter = new QPushButton(frame);
        filter->setObjectName(QStringLiteral("filter"));
        filter->setGeometry(QRect(220, 10, 41, 36));
        filter->setFont(font1);
        filter->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 20px;\n"
"	color: white;\n"
"	background-color: #2a2a2a;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        messages = new QPushButton(frame);
        messages->setObjectName(QStringLiteral("messages"));
        messages->setGeometry(QRect(310, 10, 41, 36));
        messages->setFont(font1);
        messages->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-top: 2px;\n"
"	color: white;\n"
"	font-size: 30px;\n"
"	background-color: #2a2a2a;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        update = new QPushButton(frame);
        update->setObjectName(QStringLiteral("update"));
        update->setGeometry(QRect(265, 10, 41, 36));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        update->setFont(font2);
        update->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-top: 4px;\n"
"	font-size: 18px;\n"
"	color: white;\n"
"	background-color: #2a2a2a;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(340, 10, 11, 11));
        label_8->setFont(font1);
        label_8->setStyleSheet(QLatin1String("font-size: 8px;\n"
"color: black;\n"
"background-color: #f22c2c;"));
        label_8->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(frame_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(5, 85, 671, 376));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        listWidget->setFont(font3);
        listWidget->setStyleSheet(QLatin1String("QListWidget {\n"
"	border: none;\n"
"	font-size:15px;\n"
"	background-color: #2a2a2a;\n"
"	color: white;\n"
"	padding: 0px 2px;;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"	margin-top: 4px;\n"
"	padding-left: 5px;\n"
"	background-color: #424242;\n"
"	height: 35px;\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"}\n"
"QListWidget::item:hover {\n"
"	background-color: #949494;\n"
"}"));
        add = new QPushButton(frame_2);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(625, 410, 36, 36));
        add->setFont(font1);
        add->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 20px;\n"
"	color: black;\n"
"	background-color: #6accc1;\n"
"	border-radius: 18px;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"}"));
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(5, 5, 671, 26));
        frame_4->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #2a2a2a;\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        close = new QPushButton(frame_4);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(650, 5, 16, 16));
        close->setFont(font1);
        close->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 20px;\n"
"	background-color: #f73643;\n"
"	border-radius: 8px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #d63a44;\n"
"	color: black;\n"
"}"));
        hide = new QPushButton(frame_4);
        hide->setObjectName(QStringLiteral("hide"));
        hide->setGeometry(QRect(625, 5, 16, 16));
        hide->setFont(font1);
        hide->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-bottom: 4px;\n"
"	font-size: 20px;\n"
"	background-color: #47fc65;\n"
"	border-radius: 8px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #49cc5f;\n"
"}"));
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 5, 71, 16));
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));

        retranslateUi(autorization_mainwindow);

        QMetaObject::connectSlotsByName(autorization_mainwindow);
    } // setupUi

    void retranslateUi(QDialog *autorization_mainwindow)
    {
        autorization_mainwindow->setWindowTitle(QApplication::translate("autorization_mainwindow", "App sale", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("autorization_mainwindow", "\320\237\320\276\320\270\321\201\320\272...", Q_NULLPTR));
        favorite->setText(QApplication::translate("autorization_mainwindow", "\320\230\320\267\320\261\321\200\320\260\320\275\320\275\320\276\320\265", Q_NULLPTR));
        profile->setText(QString());
        label->setText(QString());
        filter->setText(QApplication::translate("autorization_mainwindow", "\342\213\256", Q_NULLPTR));
        messages->setText(QApplication::translate("autorization_mainwindow", "\342\234\211", Q_NULLPTR));
        update->setText(QApplication::translate("autorization_mainwindow", "\342\255\257", Q_NULLPTR));
        label_8->setText(QString());
        add->setText(QApplication::translate("autorization_mainwindow", "+", Q_NULLPTR));
        close->setText(QString());
        hide->setText(QString());
        label_2->setText(QApplication::translate("autorization_mainwindow", "Sale App", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class autorization_mainwindow: public Ui_autorization_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORIZATION_MAINWINDOW_H
