#include <iostream>//подключаем библиотеку
#include <math.h>//подключаем математическую библиотеку
using namespace std;//стандартное пространствоимен
int main() //начало функции
{
    double x1,y1,x2,y2;//объявление переменных
    cout << "Введи координаты 1 точки:"<<endl;//ввод команды
    cin>> x1,y1;//вводим
    cout << "Введи координаты 2 точки:"<<endl;//ввод команды
    cin>> x2,y2;//вводим
    cout <<"Периметр:" << 2*sqrt((pow(x2-x1,2)+(pow(y2-y1,2)))) <<endl;//периметр
    cout <<"Площадь:" << sqrt((pow(x2-x1,2)*(pow(y2-y1,2))))<<endl;//площадь
                    
    return 0;//конец
}


