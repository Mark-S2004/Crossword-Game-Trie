/********************************************************************************
** Form generated from reading UI file 'losewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOSEWINDOW_H
#define UI_LOSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoseWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *switchGameButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QLabel *label;
    QLabel *timerLabel;

    void setupUi(QMainWindow *LoseWindow)
    {
        if (LoseWindow->objectName().isEmpty())
            LoseWindow->setObjectName("LoseWindow");
        LoseWindow->resize(800, 600);
        centralwidget = new QWidget(LoseWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        switchGameButton = new QPushButton(centralwidget);
        switchGameButton->setObjectName("switchGameButton");

        gridLayout->addWidget(switchGameButton, 7, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 7, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 3, 1, 1, 1);

        timerLabel = new QLabel(centralwidget);
        timerLabel->setObjectName("timerLabel");
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        timerLabel->setFont(font2);
        timerLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(timerLabel, 5, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        LoseWindow->setCentralWidget(centralwidget);

        retranslateUi(LoseWindow);

        QMetaObject::connectSlotsByName(LoseWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoseWindow)
    {
        LoseWindow->setWindowTitle(QCoreApplication::translate("LoseWindow", "MainWindow", nullptr));
        switchGameButton->setText(QCoreApplication::translate("LoseWindow", "Start", nullptr));
        label_2->setText(QCoreApplication::translate("LoseWindow", "Press Start to play again.....", nullptr));
        label->setText(QCoreApplication::translate("LoseWindow", "YOU'VE LOST, Try Again", nullptr));
        timerLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoseWindow: public Ui_LoseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSEWINDOW_H
