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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WinWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QMainWindow *WinWindow)
    {
        if (WinWindow->objectName().isEmpty())
            WinWindow->setObjectName("WinWindow");
        WinWindow->resize(800, 600);
        centralwidget = new QWidget(WinWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        WinWindow->setCentralWidget(centralwidget);

        retranslateUi(WinWindow);

        QMetaObject::connectSlotsByName(WinWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WinWindow)
    {
        WinWindow->setWindowTitle(QCoreApplication::translate("WinWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("WinWindow", "YOU'VE WON CONGRATS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinWindow: public Ui_WinWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINWINDOW_H
