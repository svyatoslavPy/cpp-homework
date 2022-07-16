#include <iostream>
#include <math.h>
using namespace std;



int main()
{
    
    // task 1 (Kilometers nautical miles)
    setlocale(0, "rus");
    double kilometers, land, mile;
    cout << "Введите киломметры: ";
    cin >> kilometers;
    land = kilometers * 0.62;
    mile = kilometers * 0.54;
    cout << "Сухопутные мили: " << land << endl;
    cout << "Морские мили: " << mile << endl;
    
    
    // task 2 (area and circumference)
    setlocale(0, "rus");
    const double pi = 3.14;
    float radius, circum, area;
    cout << "Введите радиус окружности: ";
    cin >> radius;
    circum = 2 * pi * radius;
    area = pi * (radius * radius);
    cout << "Площадь окружности: " << area << endl;
    cout << "Длина окружности: " << circum << endl;
    
    
    // task 3 (arifmetic)
    float num1, num2, num3;
    cout << "Введите ваше первое значение: ";
    cin >> num1;
    cout << "Введите второе значение: ";
    cin >> num2;
    cout << "Введидите третие значение: ";
    cin >> num3;
    cout << (num1 + num2 + num3) / 3 << "\n";
    
    
    // task 4 (inear equation root)
    setlocale(0, "rus");
    float a, b;
    cout << "Введите числа a, b и я найду x : ";
    cin >> a >> b;
    cout << (-b / a);
    
}

