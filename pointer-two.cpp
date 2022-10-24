#include <iostream>
#include <string>

using namespace std;




void deleteWidth(int** example, int choice) {
    delete[] example[choice];
}


void addWidth(int** example, int choice) {
    example[choice] = new int[10];
}

int counter = 0;

auto createArr(string** two_example, int contacts, int i = 0) {
    for (; i < contacts; i++)
        two_example[i] = new string[2];
}


auto searchArr(string** two_example) {
    int choice;
    cout << "Что вы хотите искать ?\n";
    cout << "Имя\n";
    cout << "Номер\n";
    
    if (choice == 1) {
        cout << "Введите имя : ";
    }
    else if (choice == 2) {
        cout << "Введите номер : ";
    }
}

auto inputArr(string** two_example) {
    string name;
    string number;
    
    cout << "Имя : ";
    cin >> name;
    
    cout << "Номер : ";
    cin >> number;
    
    two_example[counter][0] = name;
    two_example[counter++][1] = number;
}



auto deleteArr(string** two_example) {
    int choice;
    
    cout << "Какое имя и номер вы хотите удалить ?;
    cout << "Указатель имени или номера, который вы помните: ";
    
    cin >> choice;
    delete[] two_example[which];
}


void showArray(string** two_example, int contacts) {
    for (int i = 0; i < contacts; i++) {
        for (int j = 0; j < 2; j++) {
            cout << two_example[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    int** example = new int*[10];
    addWidth(example, 5);
    
    int** second_example = new int* [10];
    deleteWidth(second_example, 6);
    
    
    int contacts;
    cout << "Сколько будет людей ?\n";
    cin >> contacts;
    
    string** two_example = new string *[contacts];
    createArr(two_example, contacts);
    
    
    int move;
    while (true) {
        cout << "Что ты хочешь делать?\n";
        cout << "Введите имя и номер\n .Найдите имя или номер\n .Удалить имя с номером\n .Показать массив\n";
        
        cin >> move;
        
        switch (move) {
            case 1:
                input_arr(two_example);
                break;
            case 2:
                search_arr(two_example);
                break;
            case 3:
                delete_arr(two_example);
                break;
            case 4:
                showarray(two_example, contacts);
                break;
            default:
                cout << "Неправильно\n\n";
                break;
        }
    }
}
