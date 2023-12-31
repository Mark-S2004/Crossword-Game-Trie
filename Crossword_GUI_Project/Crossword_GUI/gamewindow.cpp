#include "gamewindow.h"
#include "qabstractspinbox.h"
#include "ui_gamewindow.h"
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QLineEdit>
#include "winwindow.h"
#include "losewindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    //Timer
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &GameWindow::updateTimer);
    timerLabel = new QLabel("00:00", this);
    QFont font;
    font.setPointSize(14);
    timerLabel->setFont(font);
    ui->verticalLayout->addWidget(timerLabel);
    elapsedTimer.start();

    //Riddles Import
    QString executable_path = QCoreApplication::applicationDirPath();
    QFile riddlesFile(executable_path + "/riddles.txt");
    cout << riddlesFile.exists() << endl;
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
            label->setGeometry(20, 200 + lineIndex * 30, 500, 30);

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
    QFile wordsFile(executable_path + "/words.txt");
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
                QLineEdit *lineEdit = new QLineEdit();
                lineEdit->setAlignment(Qt::AlignCenter);
                lineEdit->setMaxLength(1);
                QString objectName = QString("lineEdit_%1_%2").arg(i).arg(j);
                lineEdit->setObjectName(objectName);
                ui->gridLayout->addWidget(lineEdit, i, j);

            }
            if(t1.crosswordBoard[i][j].second>0){
                QLabel *label = new QLabel(QString::number(t1.crosswordBoard[i][j].second));
                ui->gridLayout->setAlignment(Qt::AlignCenter);
                ui->gridLayout->addWidget(label,i,j-1);
            }
        }
        cout << endl;
    }




}



GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::showEvent(QShowEvent *event) {
    QWidget::showEvent(event);
    startTimer(); // Start the timer when the window is shown
}

void GameWindow::startTimer() {
    timer->start(1000); // Start the timer with a 1-second interval (adjust as needed)
}

void GameWindow::stopTimer() {
    timer->stop(); // Stop the timer
}

void GameWindow::updateTimer() {
    int elapsedSeconds = elapsedTimer.elapsed() / 1000; // Calculate elapsed time in seconds
    QTime displayTime(0, 0);
    displayTime = displayTime.addSecs(elapsedSeconds);
    timeStr = displayTime.toString("mm:ss");
    timerLabel->setText(timeStr);

}
void GameWindow::on_submitBtn_clicked()
{
    stopTimer(); // Stop the timer before processing the submission

    int elapsedSeconds = elapsedTimer.elapsed() / 1000; // Calculate elapsed time in seconds
    qDebug()<< elapsedSeconds;
    int correctWords = 0;

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
        winWindow->updateTime(timeStr);
        winWindow->show(); // Show the WinWindow
        hide();
    } else {
        qDebug()<<"You have Lost, better luck next time";
        LoseWindow *loseWindow = new LoseWindow(this); // Create an instance of WinWindow
        loseWindow->updateTime(timeStr);
        loseWindow->updateCorrectNumber(correctWords, t1.size);
        loseWindow->show(); // Show the WinWindow
        hide();
    }
}

