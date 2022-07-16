#include <iostream>
using namespace std;


int main()
{
    // Dragon Game
    setlocale(0, "rus");
    cout << "Добро пожаловать в игру Dragon" << endl;
    cout << "Введите данные ниже: " << endl;
    
    int hp_kopeyschnik; // хп копейщика
    cout << "Ввести ХП копейщику: ";
    cin >> hp_kopeyschnik;
    
    int hp_dragon; // хп дракона
    cout << "Ввести ХП дракону: ";
    cin >> hp_dragon;
    
    int attack_dragon; // атака дракона
    cout << "Ввести данные атаки дракона: ";
    cin >> attack_dragon;
    
    int attack_kopeyschnik;  // атака копейщика
    cout << "Ввести данные атаки копейщика: ";
    cin >> attack_kopeyschnik;
    
    int number_kopeyschnik;
    cout << "Введите кол-во копейщиков: ";
    cin >> number_kopeyschnik;
    
    int sum_attack = attack_kopeyschnik * number_kopeyschnik;
    int sum_hp = hp_kopeyschnik * number_kopeyschnik;
    int hp_injured;
    while (true) { // цикл 1
        
        
        // копейщики атакуют
        
        sum_attack = attack_kopeyschnik * number_kopeyschnik;
        hp_dragon -= sum_attack;
        if (hp_dragon <= 0) {
            cout << "Копейщики победили";
            break;
        }
        else {
            cout << "Копейщики атакуют " << sum_attack << " У дракона осталось - " << hp_dragon << endl;
        }
        
        // дракон атакует
        
        if ((sum_hp - attack_dragon) % hp_kopeyschnik == 0) {
            number_kopeyschnik = (sum_hp - attack_dragon) / hp_kopeyschnik;
            sum_hp = hp_kopeyschnik * number_kopeyschnik;
            if (sum_hp <= 0) {
                cout << "Дракон атакует и побеждает";
                break;
            }
            else {
                cout << "Дракон атаковал на " << attack_dragon << "Осталось кол-во копейщиков: " << number_kopeyschnik << endl;
            }
        }
        else {
            hp_injured = hp_kopeyschnik - (sum_hp - attack_dragon) % hp_kopeyschnik;
            number_kopeyschnik = (sum_hp - attack_dragon - hp_injured) / hp_kopeyschnik + 1;
            sum_hp = hp_kopeyschnik * number_kopeyschnik - hp_injured;
            if (sum_hp <= 0) {
                cout << "Дракон атакует и побеждает";
                break;
            }
            else {
                cout << "Дракон атаковал на " << attack_dragon << "Осталось кол-во копейщиков: " << number_kopeyschnik << " У ранненого ХП: " << hp_injured << endl;
            }
        }
    }
}



