/********************************************************************************
** Form generated from reading UI file 'messenger.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSENGER_H
#define UI_MESSENGER_H

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

class Ui_messenger
{
public:
    QFrame *frame;
    QFrame *frame_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_9;
    QFrame *frame_4;
    QPushButton *pushButton;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *messenger)
    {
        if (messenger->objectName().isEmpty())
            messenger->setObjectName(QStringLiteral("messenger"));
        messenger->resize(347, 508);
        messenger->setMinimumSize(QSize(338, 463));
        messenger->setMaximumSize(QSize(16777215, 16777215));
        messenger->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(messenger);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 5, 341, 501));
        frame->setMinimumSize(QSize(341, 501));
        frame->setMaximumSize(QSize(341, 501));
        frame->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 341, 36));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pushButton_8 = new QPushButton(frame_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(310, 5, 26, 26));
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
        pushButton_9->setGeometry(QRect(280, 5, 26, 26));
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
        label_9->setGeometry(QRect(120, 10, 91, 16));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(5, 40, 331, 46));
        frame_4->setStyleSheet(QStringLiteral("background-color: #2a2a2a;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(225, 5, 101, 31));
        pushButton->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: black;\n"
"background-color: #ffb0be;\n"
"border-radius: 5px;"));
        label = new QLabel(frame_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(5, 10, 146, 21));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font-size: 19px;\n"
"color: white;"));
        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(5, 90, 331, 406));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        listWidget->setFont(font1);
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
"	height: 50px;\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"}\n"
"QListWidget::item:hover {\n"
"	background-color: #949494;\n"
"}"));

        retranslateUi(messenger);

        QMetaObject::connectSlotsByName(messenger);
    } // setupUi

    void retranslateUi(QDialog *messenger)
    {
        messenger->setWindowTitle(QApplication::translate("messenger", "Dialog", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("messenger", "\342\234\230", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("messenger", "_", Q_NULLPTR));
        label_9->setText(QApplication::translate("messenger", "Messenger", Q_NULLPTR));
        pushButton->setText(QApplication::translate("messenger", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        label->setText(QApplication::translate("messenger", "\320\234\320\265\321\201\321\201\320\265\320\275\320\264\320\266\320\265\321\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class messenger: public Ui_messenger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSENGER_H
