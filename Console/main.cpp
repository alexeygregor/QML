#include "console.h"
#include "./ui_console.h"


int main(int argc, char *argv[])
{        
    QApplication a(argc, argv);
    Console console(nullptr);
    Ui::Console ui;
    ui.setupUi(&console);
    console.display = ui.lineEdit;
    console.resize(680, 240);
    console.show();
    return a.exec();
}
