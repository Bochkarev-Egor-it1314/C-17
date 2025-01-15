#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <vector>
#include <algorithm>
#include "sqrt.h"


using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "~Программа по нахождению n знаков в десятичной записи квадратного корня из целого числа m (n>=50)~" << endl;
    unsigned long long m;
    int n;

    cout << "Введите целое число m (m <= 18446744073709551615): ";
    cin >> m;

    cout << "Введите количество знаков n (n >= 50): ";
    cin >> n;

    // Проверка условия на n
    if (n < 50)
    {
        cout << "Ошибка: n должно быть >= 50." << endl;
        exit;
    }
    else
    {
        work(m, n);
    } 
}