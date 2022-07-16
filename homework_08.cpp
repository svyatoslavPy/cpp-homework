#include <iostream>
using namespace std;
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <algorithm>


int main()
{
    // TASK 1
    setlocale(0, "rus");
    /* char simvol;
    cout << "Введите с клавиатуры символ: ";
    cin >> simvol;
    
    if (isdigit(simvol)) {
        cout << "Являеться цифрой";
    }
    else if (isalpha(simvol)) {
        cout << "Являеться буквой";
    }
    else {
        cout << "Являеться знаком пунктуацией";
    }
    */


    /*  // TASK 2
    int number;
    cout << "Ввести число";
    cin >> number;
    if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0){
        cout << "Число кратно 3, 5, 7\n";
    }
    else {
            cout << "Число не кратно 3, 5, 7\n";
    }
    system("pause");
    return 0;
    */


    /*   // TASK 3
    int number,i = 0;
    cout << "Ввести целое число: "; // не более 4 разрядов
    cin >> number;
    if ( number > 0) {
        i++;
        number /= 10;
        cout << "Результат: " << i;
        return 0;
    }
    */


    // TASK 4
    /*
    string slovo;
    cout << "Ввести пятизначное число: ";
    cin >> slovo;
    
    if (slovo.size() == 5) {
        if ((slovo[0] == slovo[4]) && (slovo[1] == slovo[3])) {
            cout << "Число являеться палиндромом";
        }
        else {
            cout << "Число не являеться палиндромом";
        }
    }
    
    */

    // TASK 5
    /*
    double up_left; // кордината вверхнего
    double left_right; // кордината нижнего правого угла
    double x, y; // кордината точки x, y в декартовой системе кординат.
    cout << "Введите кординаты вверхнего левого угла прямоугольника: ";
    cin >> up_left;
    cout << "Введите кординаты нижнего правого угла прямоугольника: ";
    cin >> left_right;
    cout << "Введите (X, Y) в декартовой системе координат: ";
    cin >> x >> y;
    if ((x >= up_left && x <= left_right) || (y >= left_right && y <= up_left)) {
        cout << "YES";
    }
    else {
        cout << "NOT";
    }
    */

}
