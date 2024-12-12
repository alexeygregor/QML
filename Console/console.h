#ifndef CONSOLE_H
#define CONSOLE_H

#include <QApplication>
#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QPushButton>
#include <QString>

class Console : public QMainWindow
{
    Q_OBJECT

public:
    QLineEdit* display = nullptr;

    Console(QWidget *parent = nullptr) : QMainWindow(parent) {}

    void menu();

    void buttonSend();

public slots:
    void button1(){ button = 1; buttonSend(); };
    void button2(){ button = 2; buttonSend(); };
    void button3(){ button = 3; buttonSend(); };
    void button4(){ button = 4; buttonSend(); };
    void button5(){ button = 5; buttonSend(); };
    void button6(){ button = 6; buttonSend(); };
    void button7(){ button = 7; buttonSend(); };
    void button8(){ button = 8; buttonSend(); };
    void button9(){ button = 9; buttonSend(); };
    void button0(){ button = 0; buttonSend(); };

    void soft(){ ch = true; --volume; menu(); };
    void loud(){ ch = true; ++volume; menu(); };
    void prev(){ ch = true; --canal; menu(); };
    void next(){ ch = true; ++canal; menu(); };
    void play(){ ch = true; menu(); };

private:
    int canal = 1;
    int button = 1;
    int volume = 10;
    bool ch = false;
};
#endif // CONSOLE_H
