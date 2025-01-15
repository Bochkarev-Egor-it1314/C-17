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

void work(unsigned long long m, int n)
{
    double sqrtM = sqrt(m); // Вычисление квадратного корня
    string sqrtStr = to_string(sqrtM); // Преобразуем квадратный корень в строку
    size_t dotPos = sqrtStr.find('.');// Находим точку

    // Выводим на экран строчку
    cout << "Итоговый результат (если числел получилось меньше чем n, то добавляем нули): ";
    for (size_t i = dotPos + 1; i < dotPos + 1 + n; i++)
    {
        if (i < sqrtStr.size())
        {
            cout << sqrtStr[i];
        }
        else
        {
            cout << '0'; // если не хватает цифр, заполняем нулями
        }
    }

}