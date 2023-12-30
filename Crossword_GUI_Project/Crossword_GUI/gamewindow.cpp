#include "gamewindow.h"
#include "qabstractspinbox.h"
#include "ui_gamewindow.h"
#include <QFile>
#include <QTextStream>
#include <QLineEdit>
#include "winwindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    //Riddles Import
    QFile riddlesFile("E:\\ASU\\Semester 5\\Data Structure\\Crosswords-Game-Trie\\Crossword_GUI_Project\\Crossword_GUI\\riddles.txt");
    if (riddlesFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&riddlesFile);

        int lineIndex = 0;
        while (!in.atEnd())
        {
            QString line = in.readLine();

            QLabel* label = new QLabel(QString("%1. %2").arg(lineIndex + 1).arg(line), this);
            label->setObjectName(QString("label%1").arg(lineIndex));
            // label->setAlignment(Qt::AlignCenter);

            // Adjust the position or size of the label as needed
            label->setGeometry(10, 200 + lineIndex * 30, 500, 30);

            label->show();

            lineIndex++;
        }

        riddlesFile.close();
    }
    else
    {
        qDebug() << "Error opening the riddles file";
    }


    //Words Import
    QFile wordsFile("E:\\ASU\\Semester 5\\Data Structure\\Crosswords-Game-Trie\\Crossword_GUI_Project\\Crossword_GUI\\words.txt");
    if (wordsFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in1(&wordsFile);
        int lineindex=1;
        while (!in1.atEnd())
        {
            QString line1 = in1.readLine();
            t1.insertIndex(line1.toStdString(),lineindex);
            lineindex++;
        }

        wordsFile.close();
    }
    else
    {
        qDebug() << "Error opening the words file";
    }

    t1.toCrosswordsBoard();
    for (int i = 0; i < static_cast<int>(t1.crosswordBoard.size()); ++i)
    {
        for (int j = 0; j < static_cast<int>(t1.crosswordBoard.size()); ++j)
        {
            if (t1.crosswordBoard[i][j].first != '_') {
                cout << t1.crosswordBoard[i][j].first;
                QLineEdit *lineEdit = new QLineEdit();
                lineEdit->setAlignment(Qt::AlignCenter);
                lineEdit->setMaxLength(1);
                QString objectName = QString("lineEdit_%1_%2").arg(i).arg(j);
                lineEdit->setObjectName(objectName);
                ui->gridLayout->addWidget(lineEdit, i, j);
                if(t1.crosswordBoard[i][j].second>0){
                    QString labelName = QString("%1").arg(t1.crosswordBoard[i][j].second);
                    QLabel *label = new QLabel(labelName);
                    ui->gridLayout->addWidget(label,i,j-1);
                }
            }
        }
        cout << endl;
    }




}

GameWindow::~GameWindow()
{
    delete ui;
}


void GameWindow::on_submitBtn_clicked()
{
    bool result = true;
    for (int i = 0; i < static_cast<int>(t1.crosswordBoard.size()); ++i)
    {
        for (int j = 0; j < static_cast<int>(t1.crosswordBoard.size()); ++j)
        {
            if (t1.crosswordBoard[i][j].first != '_') {
                QString objectName = QString("lineEdit_%1_%2").arg(i).arg(j);
                QLineEdit *lineEdit = findChild<QLineEdit *>(objectName);
                if (lineEdit) {
                    QString value = lineEdit->text();
                    if (value != t1.crosswordBoard[i][j].first) {
                        result = false;
                        break;
                    }
                }
            }
        }
        cout << endl;
    }

    if (result) {
        qDebug()<<"You have WON!!!";
        WinWindow *winWindow = new WinWindow(this); // Create an instance of WinWindow
        winWindow->show(); // Show the WinWindow
        hide();
    } else {
        qDebug()<<"You have Lost, better luck next time";
    }
}

