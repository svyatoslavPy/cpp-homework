#include <iostream>
#include <string>
#include "windows.h"
#include "audiere.h"
#pragma comment(lib, "audiere.lib")
using namespace std;
using namespace audiere;



int main()
{
    system("COLOR 2");
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


        // TASK 1
    /* int weight, height; //
    cout << "Введите ваш рост: ";
    cin >> height;
    cout << "Введите ваш вес: ";
    cin >> weight;
    int girl = (height - 110); // для женщин
    int man = (height - 100); // для мужчин
    cout << "Введите ваш пол: ";
    cin >> girl >> man;
    if (girl == weight) {
        cout << "Идеальный вес";
    }
    else if (girl > weight) {
        cout << "До идеального веса не хватает" << girl - weight << "Килограммов";
    }
    else if (girl - weight) {
        cout << "Худеть срочно";
    }
    else if (man == weight) {
        cout << "Идеальный вес";
    }
    else if (man > weight) {
        cout << "До идеального веса не хватает" << man - weight << "Килограммов";
    }
    else if (man - weight) {
        cout << "Худеть срочно";
    }
    */



        // TASK 2
     /* int num, month;
    // Пользователь указывает дату своего рождения
    cout << "Введите число вашего день рождения: ";
    cin >> num;
    cout << "Введите месяц вашего день рождения: ";
    cin >> month;
    if ((num <= 21 && month >= 03) || (num <= 20 && month >= 04)) {
        cout << "Овен";
    }
    else if ((num <= 21 && month >= 04) || (num <= 21 && month >= 05)) {
        cout << "Телец";
    }
    else if ((num <= 22 && month >= 05) || (num <= 21 && month >= 06)) {
        cout << "Близнецы";
    }
    else if ((num <= 22 && month >= 06) || (num <= 22 && month >= 07)) {
        cout << "Рак";
    }
    else if ((num <= 23 && month >= 07) || (num <= 23 && month >= 8)) {
        cout << "Лев";
    }
    else if ((num <= 24 && month >= 8) || (num <= 23 && month >= 9)) {
        cout << "Дева";
    }
    else if ((num <= 24 && month >= 9) || (num <= 23 && month >= 10)) {
        cout << "Весы";
    }
    else if ((num <= 24 && month >= 10) || (num <= 22 && month >= 11)) {
        cout << "Скорпион";
    }
    else if ((num <= 23 && month >= 11) || (num <= 21 && month >= 12)) {
        cout << "Стрелец";
    }
    else if ((num <= 22 && month >= 12) || (num <= 20 && month >= 01)) {
        cout << "Козерог";
    }
    else if ((num <= 21 && month >= 01) || (num <= 19 && month >= 02)) {
        cout << "Водолей";
    }
    else if ((num <= 20 && month >= 02) || (num <= 20 && month >= 03)) {
        cout << "Рыбы";
    }
    */



       // TASK 4
    /*
    string user_input;
    string question1 = "Когда был выпущен первый айфон: ";
    string question2 = "Когда был создан C++: ";
    string question3 = "Какой был придуман самый первый язык программирования: ";
    string question4 = "Какой из языков программирования низкоуровневый: ";
    string otvet1 = "1 апреля 1976 года"; // ответ первого вопроса
    string otvet2 = "5 апреля 1996 года"; // ответ второго вопроса
    string otvet3 = "Fortran"; // ответ третьего вопроса
    string otvet4 = "Assembler"; // ответ четвёртого вопроса
    cout << question1 << endl;
    cout << "1 апреля 1976 года,\n10 августа 1970 года,\n5 июня 1974 года,\n6 марта 1975 года\n";
    cout << "Введите свой ответ: ";
    getline(cin, user_input);
    if (user_input == otvet1) {
        cout << "Правильный ответ - переходим к следующему" << endl;
        cout << question2 << endl;
        cout << "5 апреля 1996 года,\n2 мая 1990 года,\n12 декабря 1991 года,\n8 января 1997 года\n";
        cout << "Введите свой ответ: ";
        getline(cin, user_input);
    }
    if (user_input == otvet2) {
        cout << "Правильный ответ - переходим к следующему" << endl;
        cout << question3 << endl;
        cout << "Fortran,\nAssembler,\n Java ,\n Pascal\n";
        cout << "Введите свой ответ: ";
        getline(cin, user_input);
    }
    if (user_input == otvet3) {
        cout << question4 << endl;
        cout << "Pascal,\n - Fortran,\n - Snobol,\n Assembler\n";
        cout << "Введите свой ответ: ";
        getline(cin, user_input);
    }
    else {
        cout << "Неправильный выбор - игра окончена";
    }
    if (user_input == otvet4) {
        cout << "Поздравляем! Вы выиграли игру О, счастливчик!";
        system("COLOR 3");
        AudioDevicePtr device = OpenDevice();
        OutputStreamPtr sound = OpenSound(device, "sound.wav", false);
        sound->play();
        return 0;
     }
    */



    
    
    

    
    
    
}
