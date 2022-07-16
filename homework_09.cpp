#include <iostream>
using namespace std;


int main()
{
     
    setlocale(0, "rus");
    // TASK 1
    /* double X1, Y1, X2, Y2;
    cout << "Введите точку X1: ";
    cin >> X1;
    cout << "Введите точку Y1: ";
    cin >> Y1;
    cout << "Введите точку X2: ";
    cin >> X2;
    cout << "Введите точку Y2: ";
    cin >> Y2;
    if (Y1 == Y2) {
        cout << "Парралельная оси X";
    }
    else if ( X1 == X2) {
        cout << "Парралельная оси Y";
    }
    else {
        cout << "Не парралельная оси X и Y;
    }
    */


    // TASK 2
    /*
    double num1;
    cout << "Введите число: ";
    cin >> num1;
    if((num1 - (int)num1) != 0) {
        cout << "Вещественное";
    }
    else {
        cout << "Не вещественное";
    }
    */


    /* // TASK 3
    int hours, minutes, seconds;
    cout << "Ввести текущее время в часах: "; // часы
    cin >> hours;
    cout << "Ввести текущее время в минутах: "; // минуты
    cin >> minutes;
    cout << "Ввести текущее время в секундах: "; // секунды
    cin >> seconds;
    if (hours < 0 || hours > 23) {
        cout << "Некорректно";
    }
    else if (minutes < 0 || minutes > 59) {
        cout << "Некорректно";

    }
    else if (seconds < 0 || seconds > 59) {
        cout << "Некорректно";
    }
    else {
        cout << "Корректно";
    }
    */


    /*
    int ticket; // TASK 4
    cout << "Введи шестизначный номер трамвайного билета: "; // определить является ли он счастливым
    cin >> ticket;
    int a = ticket % 10; // 1
        int b = ticket / 10 % 10; // 2
        int c = ticket / 100 % 10; // 3
        int d = ticket / 1000 % 10; // 4
        int e = ticket / 10000 % 10; // 5
        int f = ticket / 100000 % 10; // 6
    if (a + b + c == d + e + f) {
        cout << "Счастливый билет";
    }
    else {
        cout << "Несчастливый";
    }
    return 0;
    */


     // TASK 5
    /*
    int time;
    cout << "Введите время в часах: ";
    cin >> time;
    if (time >= 6 && time <= 12) {
        cout << "Доброе утро";
    }
    else if (time >= 12 && time <= 18) {
        cout << "Добрый день";
    }
    else if (time >= 19 && time <= 23) {
        cout << "Добрый вечер";
    }
    else {
        cout << "Спокойной ночи";
    }
    */
      // alternative TASK 5 (on switch)
    /*
    int time;
    cout << "Введите время в часах: ";
    cin >> time;
    switch (time) {
    case 1:
        cout << "Добрый день";
        break;
    case 2:
        cout << "Добрый день";
        break;
    case 3:
        cout << "Добрый день";
        break;
    case 4:
        cout << "Добрый день";
        break;
    case 5:
        cout << "Добрый день";
        break;
    case 6:
        cout << "Добрый день";
        break;
    case 7:
        cout << "Добрый день";
        break;
    case 8:
        cout << "Добрый день";
        break;
    case 9:
        cout << "Добрый день";
        break;
    case 10:
        cout << "Добрый день";
        break;
    case 11:
        cout << "Добрый день";
        break;
    case 12:
        cout << "Добрый день";
        break
    ; case 13:
        cout << "Добрый день";
        break;
    case 14:
        cout << "Добрый день";
        break;
    case 15:
        cout << "Добрый день";
        break;
    default:
        cout << "Добрый вечер";
        exit(0);
        break;
    }
    */


}
