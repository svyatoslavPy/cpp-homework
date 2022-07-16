
#include <iostream>

using namespace std;
int main()
{
    setlocale(0, "rus");
    /* // task 1
    double number, number2;
    cout << "Ввести с клавиатуры первое число: ";
    cin >> number;
    cout << "Ввести c клавиатуры второе число: ";
    cin >> number2;
    cout << "Сумма целых частей: " << (int)number + number << endl;
    cout << "Сумма дробных частей: " << (double) number + number2 << endl;
    */
    
    /* // task 2
    float S, V , T;
    cout << "Ввести расстояние до аэропорта в км: ";
    cin >> S;
    cout << "Введите время за которого нужно доехать (в min): ";
    cin >> T;
    V = S / T;
    cout << "Ваша скорость: " << (int)V;
    */
     
    /* // task 3
    double sec; // время прошедшее с начала рабочего дня
    int day = 8;// рабочий день составляет 8 часов
    cout << "Введите время в секундах прошедшее с начала рабочего дня: " << endl;
    cin >> sec;
    cout << "Вам осталось сидеть" << (sec - day) / 3600 << "hours" << endl;
    system("pause");
    */

    /* // task 4
    double price, number, discount;
    int result;
    cout << "Введите стоимость одного ноутбука: "; // price laptop
    cin >> price;
    cout << "Введите их количество: "; // number laptop
    cin >> number;
    cout << "Введите процент скидки: "; // discount percentage
    cin >> discount;
    result = price * number * ((100 - discount) / 100);
    сout << "Общая сумма заказа" << result << endl;
    system("pause");
    */
    
    /*   // TASK 5
    const unsigned long bitInGB = 8000000000;
    double film_size; // размер одного фильма в GB
    cout << "Введите размер одного фильма в GB: ";
    cin >> film_size;
    double speed; // скорость интернет-соединения в битах, секундах
    cout << "Введите скорость интернет-соединения в битах, секундах";
    size *= bitInGB;
    double time = film_size / speed;
    unsigned long intTime = static_cast<unsigned long>(time);
    cout << intTime / 60 / 60 << " часов ";
    cout << intTime / 60 % 60 << " минут ";
    cout << intTime % 60 << " секунд " << endl;
    // определить определить, за какое время (часы, минуты и секунды) скачается фильм.
    */


}  
