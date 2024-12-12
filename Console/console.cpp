#include "console.h"


void Console::menu()
{
    if((canal < 1) || (canal > 100)) canal = 1;

    if(volume < 0) volume = 0;
    if(volume > 10) volume = 10;

    QString vol;
    for(int i = 0; i < volume; ++i)
        vol += "|";

    if(ch)
        display->setText("Canal " + QString::number(canal) + "                    Volume " + vol);
}

void Console::buttonSend()
{
    if(ch)
    { display->setText(""); ch = false; };

    if(button == 1)
        display->setText(display->text() + "1");
    if(button == 2)
        display->setText(display->text() + "2");
    if(button == 3)
        display->setText(display->text() + "3");
    if(button == 4)
        display->setText(display->text() + "4");
    if(button == 5)
        display->setText(display->text() + "5");
    if(button == 6)
        display->setText(display->text() + "6");
    if(button == 7)
        display->setText(display->text() + "7");
    if(button == 8)
        display->setText(display->text() + "8");
    if(button == 9)
        display->setText(display->text() + "9");
    if(button == 0)
        display->setText(display->text() + "0");

    canal = display->text().toInt();
}
