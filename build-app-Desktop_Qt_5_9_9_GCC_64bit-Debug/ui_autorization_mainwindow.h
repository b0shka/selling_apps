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
    QListWidget *listWidget;
    QFrame *frame;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *autorization_mainwindow)
    {
        if (autorization_mainwindow->objectName().isEmpty())
            autorization_mainwindow->setObjectName(QStringLiteral("autorization_mainwindow"));
        autorization_mainwindow->resize(668, 428);
        autorization_mainwindow->setMinimumSize(QSize(668, 428));
        autorization_mainwindow->setMaximumSize(QSize(668, 428));
        listWidget = new QListWidget(autorization_mainwindow);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 55, 671, 376));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        listWidget->setFont(font);
        listWidget->setStyleSheet(QLatin1String("QListWidget {\n"
"	border: none;\n"
"	font-size:15px;\n"
"	background-color: #2a2a2a;\n"
"	color: white;\n"
"	padding: 5px 7px;;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"	padding: 2 px 6px;\n"
"}"));
        frame = new QFrame(autorization_mainwindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 671, 56));
        frame->setStyleSheet(QStringLiteral("background-color: #404040"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 206, 36));
        QFont font1;
        font1.setPointSize(11);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QLatin1String("padding:2px 5px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #2a2a2a;\n"
"border-radius: 5px;\n"
"border: none;"));
        lineEdit->setClearButtonEnabled(true);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(225, 10, 76, 36));
        pushButton->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #2a2a2a;\n"
"border-radius: 5px;"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 10, 36, 36));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 18px;\n"
"height: 28px;\n"
"color: black;\n"
"background-color: #6accc1;\n"
"border-radius: 18px;"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(421, 21, 181, 16));
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 10, 101, 36));
        pushButton_3->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #2a2a2a;\n"
"border-radius: 5px;"));
        pushButton_4 = new QPushButton(autorization_mainwindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(615, 380, 36, 36));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 18px;\n"
"height: 28px;\n"
"color: black;\n"
"background-color: #6accc1;\n"
"border-radius: 18px;"));

        retranslateUi(autorization_mainwindow);

        QMetaObject::connectSlotsByName(autorization_mainwindow);
    } // setupUi

    void retranslateUi(QDialog *autorization_mainwindow)
    {
        autorization_mainwindow->setWindowTitle(QApplication::translate("autorization_mainwindow", "App sale", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("autorization_mainwindow", "\320\237\320\276\320\270\321\201\320\272...", Q_NULLPTR));
        pushButton->setText(QApplication::translate("autorization_mainwindow", "\320\237\320\276\320\270\321\201\320\272", Q_NULLPTR));
        pushButton_2->setText(QString());
        label->setText(QString());
        pushButton_3->setText(QApplication::translate("autorization_mainwindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("autorization_mainwindow", "+", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class autorization_mainwindow: public Ui_autorization_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORIZATION_MAINWINDOW_H
