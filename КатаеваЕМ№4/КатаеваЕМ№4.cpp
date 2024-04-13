// КатаеваЕМ№4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int d, b, c;
    cout << "Введите значение катета d: ";
    cin >> d;
    cout << "Введите значение катета b: ";
    cin >> b;

    c = sqrt(pow(d,2) + pow(b,2));
    cout << "Гипотенуза в треугольнике == " << c << endl;
    cout << "Спасибо за внимание!) ";
    cout << "2+2";
}

