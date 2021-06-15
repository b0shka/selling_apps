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
    QLabel *label;
    QListWidget *listWidget;
    QFrame *frame_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_9;

    void setupUi(QDialog *favorite_app)
    {
        if (favorite_app->objectName().isEmpty())
            favorite_app->setObjectName(QStringLiteral("favorite_app"));
        favorite_app->resize(319, 448);
        favorite_app->setMinimumSize(QSize(319, 448));
        favorite_app->setMaximumSize(QSize(319, 448));
        favorite_app->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(favorite_app);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 5, 311, 441));
        frame->setMinimumSize(QSize(311, 441));
        frame->setMaximumSize(QSize(311, 441));
        frame->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 35, 121, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font-size: 18px;\n"
"color: white;"));
        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(5, 65, 301, 371));
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
        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(-5, 0, 316, 26));
        frame_5->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        pushButton_8 = new QPushButton(frame_5);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(295, 5, 16, 16));
        pushButton_8->setFont(font);
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
        pushButton_9->setGeometry(QRect(270, 5, 16, 16));
        pushButton_9->setFont(font);
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
        label_9->setGeometry(QRect(115, 5, 66, 16));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));

        retranslateUi(favorite_app);

        QMetaObject::connectSlotsByName(favorite_app);
    } // setupUi

    void retranslateUi(QDialog *favorite_app)
    {
        favorite_app->setWindowTitle(QApplication::translate("favorite_app", "Favorite apps", Q_NULLPTR));
        label->setText(QApplication::translate("favorite_app", "\320\230\320\267\320\261\321\200\320\260\320\275\320\275\320\276\320\265", Q_NULLPTR));
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        label_9->setText(QApplication::translate("favorite_app", "Favorite", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class favorite_app: public Ui_favorite_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAVORITE_APP_H
