#include "calculator.h"
#include "./ui_calculator.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator calc(nullptr);
    Ui::Calculator ui;
    ui.setupUi(&calc);
    calc.Value1 = ui.Value1;
    calc.Value2 = ui.Value2;
    calc.Result = ui.Result;
    calc.resize(500, 100);
    calc.move(400, 200);
    calc.show();
    return a.exec();
}
