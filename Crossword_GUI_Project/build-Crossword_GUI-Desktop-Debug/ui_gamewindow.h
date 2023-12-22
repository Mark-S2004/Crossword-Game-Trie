/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *fifthrid;
    QLabel *secrid;
    QLabel *fourthrid;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_11;
    QLabel *label;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_17;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *thirdrid;
    QLabel *firstrid;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName("GameWindow");
        GameWindow->resize(800, 600);
        centralwidget = new QWidget(GameWindow);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 20, 381, 57));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setAlignment(Qt::AlignCenter);
        fifthrid = new QLabel(centralwidget);
        fifthrid->setObjectName("fifthrid");
        fifthrid->setGeometry(QRect(60, 320, 63, 20));
        secrid = new QLabel(centralwidget);
        secrid->setObjectName("secrid");
        secrid->setGeometry(QRect(60, 190, 63, 20));
        fourthrid = new QLabel(centralwidget);
        fourthrid->setObjectName("fourthrid");
        fourthrid->setGeometry(QRect(60, 270, 63, 20));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(450, 90, 291, 379));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_18 = new QLineEdit(layoutWidget_2);
        lineEdit_18->setObjectName("lineEdit_18");

        gridLayout->addWidget(lineEdit_18, 10, 3, 1, 1);

        lineEdit_20 = new QLineEdit(layoutWidget_2);
        lineEdit_20->setObjectName("lineEdit_20");

        gridLayout->addWidget(lineEdit_20, 9, 1, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget_2);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 3, 6, 1, 1);

        lineEdit_19 = new QLineEdit(layoutWidget_2);
        lineEdit_19->setObjectName("lineEdit_19");

        gridLayout->addWidget(lineEdit_19, 9, 2, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 2, 6, 1, 1);

        lineEdit_21 = new QLineEdit(layoutWidget_2);
        lineEdit_21->setObjectName("lineEdit_21");

        gridLayout->addWidget(lineEdit_21, 9, 5, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 1, 6, 1, 1);

        lineEdit_11 = new QLineEdit(layoutWidget_2);
        lineEdit_11->setObjectName("lineEdit_11");

        gridLayout->addWidget(lineEdit_11, 3, 3, 1, 1);

        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 6, 1, 1);

        lineEdit_12 = new QLineEdit(layoutWidget_2);
        lineEdit_12->setObjectName("lineEdit_12");

        gridLayout->addWidget(lineEdit_12, 5, 3, 1, 1);

        lineEdit_8 = new QLineEdit(layoutWidget_2);
        lineEdit_8->setObjectName("lineEdit_8");

        gridLayout->addWidget(lineEdit_8, 5, 5, 1, 1);

        lineEdit_10 = new QLineEdit(layoutWidget_2);
        lineEdit_10->setObjectName("lineEdit_10");

        gridLayout->addWidget(lineEdit_10, 5, 4, 1, 1);

        lineEdit_13 = new QLineEdit(layoutWidget_2);
        lineEdit_13->setObjectName("lineEdit_13");

        gridLayout->addWidget(lineEdit_13, 5, 7, 1, 1);

        lineEdit_16 = new QLineEdit(layoutWidget_2);
        lineEdit_16->setObjectName("lineEdit_16");

        gridLayout->addWidget(lineEdit_16, 8, 3, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout->addWidget(lineEdit_5, 4, 6, 1, 1);

        lineEdit_15 = new QLineEdit(layoutWidget_2);
        lineEdit_15->setObjectName("lineEdit_15");

        gridLayout->addWidget(lineEdit_15, 7, 3, 1, 1);

        lineEdit_22 = new QLineEdit(layoutWidget_2);
        lineEdit_22->setObjectName("lineEdit_22");

        gridLayout->addWidget(lineEdit_22, 9, 4, 1, 1);

        lineEdit_6 = new QLineEdit(layoutWidget_2);
        lineEdit_6->setObjectName("lineEdit_6");

        gridLayout->addWidget(lineEdit_6, 5, 6, 1, 1);

        lineEdit_9 = new QLineEdit(layoutWidget_2);
        lineEdit_9->setObjectName("lineEdit_9");

        gridLayout->addWidget(lineEdit_9, 3, 4, 1, 1);

        lineEdit_14 = new QLineEdit(layoutWidget_2);
        lineEdit_14->setObjectName("lineEdit_14");

        gridLayout->addWidget(lineEdit_14, 6, 3, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget_2);
        lineEdit_7->setObjectName("lineEdit_7");

        gridLayout->addWidget(lineEdit_7, 3, 5, 1, 1);

        lineEdit_17 = new QLineEdit(layoutWidget_2);
        lineEdit_17->setObjectName("lineEdit_17");

        gridLayout->addWidget(lineEdit_17, 9, 3, 1, 1);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 9, 0, 1, 1);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 5, 2, 1, 1);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 3, 2, 1, 1);

        thirdrid = new QLabel(centralwidget);
        thirdrid->setObjectName("thirdrid");
        thirdrid->setGeometry(QRect(60, 230, 63, 16));
        firstrid = new QLabel(centralwidget);
        firstrid->setObjectName("firstrid");
        firstrid->setGeometry(QRect(60, 150, 63, 20));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(620, 540, 80, 29));
        GameWindow->setCentralWidget(centralwidget);

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QCoreApplication::translate("GameWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("GameWindow", "Crossword Game", nullptr));
        fifthrid->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        secrid->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        fourthrid->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("GameWindow", "1", nullptr));
        label_4->setText(QCoreApplication::translate("GameWindow", "4", nullptr));
        label_5->setText(QCoreApplication::translate("GameWindow", "3", nullptr));
        label_3->setText(QCoreApplication::translate("GameWindow", "2", nullptr));
        thirdrid->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        firstrid->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        pushButton_3->setText(QCoreApplication::translate("GameWindow", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
