/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame_2;
    QFrame *frame;
    QLineEdit *lineEdit;
    QPushButton *login;
    QPushButton *filter;
    QPushButton *update;
    QListWidget *listWidget;
    QFrame *frame_3;
    QPushButton *close;
    QPushButton *hide;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(681, 469);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(668, 428));
        MainWindow->setMaximumSize(QSize(1111, 1111));
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 5, 681, 471));
        frame_2->setMinimumSize(QSize(681, 471));
        frame_2->setMaximumSize(QSize(681, 471));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 35, 671, 56));
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
        login = new QPushButton(frame);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(620, 10, 41, 36));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        login->setFont(font1);
        login->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-bottom: 3px;\n"
"	color: white;\n"
"	font-size: 20px;\n"
"	background-color: #2a2a2a;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        filter = new QPushButton(frame);
        filter->setObjectName(QStringLiteral("filter"));
        filter->setGeometry(QRect(220, 10, 41, 36));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        filter->setFont(font2);
        filter->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 20px;\n"
"	color: white;\n"
"	background-color: #2a2a2a;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        update = new QPushButton(frame);
        update->setObjectName(QStringLiteral("update"));
        update->setGeometry(QRect(265, 10, 41, 36));
        update->setFont(font2);
        update->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-top: 4px;\n"
"	color: white;\n"
"	font-size: 18px;\n"
"	background-color: #2a2a2a;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        listWidget = new QListWidget(frame_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(5, 90, 671, 371));
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
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(5, 0, 671, 36));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #2a2a2a;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        close = new QPushButton(frame_3);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(640, 5, 26, 26));
        close->setFont(font1);
        close->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 20px;\n"
"	color: white;\n"
"	background-color: #2a2a2a;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        hide = new QPushButton(frame_3);
        hide->setObjectName(QStringLiteral("hide"));
        hide->setGeometry(QRect(610, 5, 26, 26));
        hide->setFont(font1);
        hide->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-bottom: 4px;\n"
"	font-size: 20px;\n"
"	color: white;\n"
"	background-color: #2a2a2a;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(285, 10, 71, 16));
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "App sale", Q_NULLPTR));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272...", Q_NULLPTR));
        login->setText(QApplication::translate("MainWindow", "\342\215\210", Q_NULLPTR));
        filter->setText(QApplication::translate("MainWindow", "\342\213\256", Q_NULLPTR));
        update->setText(QApplication::translate("MainWindow", "\342\255\257", Q_NULLPTR));
        close->setText(QApplication::translate("MainWindow", "\342\234\230", Q_NULLPTR));
        hide->setText(QApplication::translate("MainWindow", "_", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Sale App", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H