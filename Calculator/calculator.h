#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QString>


class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    QLineEdit* Value1 = nullptr;
    QLineEdit* Value2 = nullptr;
    QLineEdit* Result = nullptr;

    Calculator(QWidget *parent = nullptr) : QMainWindow(parent){}

    void validation();

public slots:
    void button1(){ index = 1; validation(); };
    void button2(){ index = 2; validation(); };
    void button3(){ index = 3; validation(); };
    void button4(){ index = 4; validation(); };

private:
    int index;
};
#endif // MAINWINDOW_H
