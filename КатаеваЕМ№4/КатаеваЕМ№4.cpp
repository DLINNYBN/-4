// КатаеваЕМ№4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int a, b, c;
    cout << "Введите значение а: ";
    cin >> a;
    cout << "Введите значение а: ";
    cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));
    cout << "Гипотенуза в треугольнике == " << c << endl;
    cout << "Спасибо за внимание!) ";

}

