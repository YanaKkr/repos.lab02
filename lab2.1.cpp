// Lab_02.cpp
// < Кухар Яна >
// Лабораторна робота №2.
// Лінійні програми.
// Варіант 11

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a; // вхідний параметр
    double z1; // результат 1 виразу
    // double z2; // результат 2 виразу

    cout << "a = "; cin >> a;

    z1 = ( (1-2*sin(a)*sin(a)))/(1+2*sin(a)*cos(a) );

    // z2 = ( 1-tan(a))/(1+tan(a) );

    cout << endl;
    cout << "z1 = " << z1 << endl;
   // cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}