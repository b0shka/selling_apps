/********************************************************************************
** Form generated from reading UI file 'user_apps.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_APPS_H
#define UI_USER_APPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_user_apps
{
public:
    QFrame *frame;
    QListWidget *listWidget;
    QLabel *label;
    QFrame *frame_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_9;

    void setupUi(QDialog *user_apps)
    {
        if (user_apps->objectName().isEmpty())
            user_apps->setObjectName(QStringLiteral("user_apps"));
        user_apps->resize(318, 438);
        user_apps->setMinimumSize(QSize(318, 438));
        user_apps->setMaximumSize(QSize(318, 438));
        user_apps->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(user_apps);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 5, 311, 431));
        frame->setMinimumSize(QSize(311, 431));
        frame->setMaximumSize(QSize(311, 431));
        frame->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(5, 70, 301, 356));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        listWidget->setFont(font);
        listWidget->setStyleSheet(QLatin1String("QListWidget {\n"
"	border: none;\n"
"	font-size:15px;\n"
"	background-color: #2a2a2a;\n"
"	padding: 0px 2px;;\n"
"}\n"
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
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 196, 21));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("font-size: 18px;\n"
"color: white;"));
        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 311, 26));
        frame_5->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        pushButton_8 = new QPushButton(frame_5);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(290, 5, 16, 16));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 20px;\n"
"	background-color: #f73643;\n"
"	border-radius: 8px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #d63a44;\n"
"	color: black;\n"
"}"));
        pushButton_9 = new QPushButton(frame_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(265, 5, 16, 16));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-bottom: 4px;\n"
"	font-size: 20px;\n"
"	background-color: #47fc65;\n"
"	border-radius: 8px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #49cc5f;\n"
"}"));
        label_9 = new QLabel(frame_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(125, 5, 66, 16));
        label_9->setFont(font1);
        label_9->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));

        retranslateUi(user_apps);

        QMetaObject::connectSlotsByName(user_apps);
    } // setupUi

    void retranslateUi(QDialog *user_apps)
    {
        user_apps->setWindowTitle(QApplication::translate("user_apps", "List apps", Q_NULLPTR));
        label->setText(QApplication::translate("user_apps", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274", Q_NULLPTR));
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        label_9->setText(QApplication::translate("user_apps", "List app", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class user_apps: public Ui_user_apps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_APPS_H
