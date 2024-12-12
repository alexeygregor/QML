#include "calculator.h"


void Calculator::validation()
{
    double valid1 = Value1->text().toDouble();
    double valid2 = Value2->text().toDouble();

    QString str1_1 = Value1->text();
    QString str1_2 = QString("%1").arg(valid1);

    QString str2_1 = Value2->text();
    QString str2_2 = QString("%1").arg(valid2);

    if((str1_1 == str1_2) && (str2_1 == str2_2))
    {
        if(index == 1)
            Result->setText(QString::number(Value1->text().toDouble() + Value2->text().toDouble()));

        if(index == 2)
            Result->setText(QString::number(Value1->text().toDouble() - Value2->text().toDouble()));

        if(index == 3)
            Result->setText(QString::number(Value1->text().toDouble() * Value2->text().toDouble()));

        if(index == 4)
            Result->setText(QString::number(Value1->text().toDouble() / Value2->text().toDouble()));
    }
    else
        Result->setText("Error");
}
