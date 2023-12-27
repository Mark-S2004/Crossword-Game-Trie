#include "gamewindow.h"
#include "qabstractspinbox.h"
#include "ui_gamewindow.h"
#include <QFile>
#include <QTextStream>
#include <QLineEdit>

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

            QLabel* label = new QLabel(line, this);
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

    // QLabel* label1 =new QLabel("YEhua");
    // QLabel* label2 =new QLabel("geno");
    // QLabel* label3 =new QLabel("YEhua");
    // QLabel* label4 =new QLabel("geno");
    // ui->gridLayout->addWidget(label1,1,2);
    // ui->gridLayout->addWidget(label2);
    // ui->gridLayout->addWidget(label3);
    // ui->gridLayout->addWidget(label4);


    //Words Import
    Trie t1;
    QFile wordsFile("E:\\ASU\\Semester 5\\Data Structure\\Crosswords-Game-Trie\\Crossword_GUI_Project\\Crossword_GUI\\words.txt");
    if (wordsFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in1(&wordsFile);
        while (!in1.atEnd())
        {
            QString line1 = in1.readLine();
            t1.insert(line1.toStdString());
        }

        wordsFile.close();
    }
    else
    {
        qDebug() << "Error opening the words file";
    }

    t1.toCrosswordsBoard();
    for (int i = 0; i < (int) t1.crosswordBoard.size(); ++i)
    {
        for (int j = 0; j < (int) t1.crosswordBoard.size(); ++j)
        {
            if(t1.crosswordBoard[i][j].first!='_'){
            cout << t1.crosswordBoard[i][j].first;
            QLineEdit *lineEdit = new QLineEdit();
            lineEdit->setAlignment(Qt::AlignCenter);
            ui->gridLayout->addWidget(lineEdit,i,j);

            }
        }
        cout << endl;
    }



}

GameWindow::~GameWindow()
{
    delete ui;
}


void GameWindow::on_submitBtn_clicked(Trie t1)
{
    // bool result=true;
    // for (int i = 0; i < (int) t1.crosswordBoard.size(); ++i)
    // {
    //     for (int j = 0; j < (int) t1.crosswordBoard.size(); ++j)
    //     {
    //         if(t1.crosswordBoard[i][j].first!='_'){
    //             if(ui->gridLayout->

    //         }
    //     }
    //     cout << endl;
    // }
    // if(result){

    // }
    // else{

    // }
}

