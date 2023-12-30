/********************************************************************************
** Form generated from reading UI file 'winwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINWINDOW_H
#define UI_WINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WinWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *switchGameButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;

    void setupUi(QMainWindow *WinWindow)
    {
        if (WinWindow->objectName().isEmpty())
            WinWindow->setObjectName("WinWindow");
        WinWindow->resize(800, 600);
        centralwidget = new QWidget(WinWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 6, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 1);

        switchGameButton = new QPushButton(centralwidget);
        switchGameButton->setObjectName("switchGameButton");

        gridLayout->addWidget(switchGameButton, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

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


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        WinWindow->setCentralWidget(centralwidget);

        retranslateUi(WinWindow);

        QMetaObject::connectSlotsByName(WinWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WinWindow)
    {
        WinWindow->setWindowTitle(QCoreApplication::translate("WinWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("WinWindow", "Press Start to play again.....", nullptr));
        switchGameButton->setText(QCoreApplication::translate("WinWindow", "Start", nullptr));
        label->setText(QCoreApplication::translate("WinWindow", "YOU'VE WON CONGRATS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinWindow: public Ui_WinWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINWINDOW_H
