/********************************************************************************
** Form generated from reading UI file 'favorite_app.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAVORITE_APP_H
#define UI_FAVORITE_APP_H

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

class Ui_favorite_app
{
public:
    QFrame *frame;
    QFrame *frame_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_9;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *favorite_app)
    {
        if (favorite_app->objectName().isEmpty())
            favorite_app->setObjectName(QStringLiteral("favorite_app"));
        favorite_app->resize(319, 464);
        favorite_app->setMinimumSize(QSize(308, 418));
        favorite_app->setMaximumSize(QSize(432423, 432232));
        favorite_app->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(favorite_app);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 5, 311, 456));
        frame->setMinimumSize(QSize(311, 456));
        frame->setMaximumSize(QSize(311, 456));
        frame->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 311, 36));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pushButton_8 = new QPushButton(frame_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(280, 5, 26, 26));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 20px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        pushButton_9 = new QPushButton(frame_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(250, 5, 26, 26));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-bottom: 4px;\n"
"	font-size: 20px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #2a2a2a;\n"
"}"));
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(110, 10, 66, 16));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 50, 121, 21));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font-size: 18px;\n"
"color: white;"));
        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(5, 80, 301, 371));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        listWidget->setFont(font1);
        listWidget->setStyleSheet(QLatin1String("QListWidget {\n"
"	border: none;\n"
"	font-size: 15px;\n"
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

        retranslateUi(favorite_app);

        QMetaObject::connectSlotsByName(favorite_app);
    } // setupUi

    void retranslateUi(QDialog *favorite_app)
    {
        favorite_app->setWindowTitle(QApplication::translate("favorite_app", "Favorite apps", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("favorite_app", "\342\234\230", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("favorite_app", "_", Q_NULLPTR));
        label_9->setText(QApplication::translate("favorite_app", "Favorite", Q_NULLPTR));
        label->setText(QApplication::translate("favorite_app", "\320\230\320\267\320\261\321\200\320\260\320\275\320\275\320\276\320\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class favorite_app: public Ui_favorite_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAVORITE_APP_H
