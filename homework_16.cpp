
#include <iostream>
#include <cstdlib>
using namespace std;

int random (int min, int max) {  // функция для диапазона случайных чисел
    max++;
    return abs(rand()%(max-min))+min;
}

int main() {
        
    //Homework with massive
    
    
    // Task 1
    /*
    const int size = 5; // const
    int a[size] = {1, 2, 3, 4, 5}; // cоздаём массив(int)
    
    for (int i = 5; i >= 0; i--) { запускаем for и пробежались в обратную сторону по массиву
        
        cout << a[i] << "\n"; // вывод
    }
    */
    
    
    
    
    
    // Task 2
    /*
    srand(time(0)); // инициализация генерации случайных чисел
    const int size = 20; // создаём константу для элементов сколько всего можем поместить в массив
    int a[size]; //  создаём массив(int)
    
    for (int i = 0; i < size; i++) { // запуск for по массиву
        
        a[i] = 1 + rand() % 20; // cлучайные числа(20)
        if (a[i] % 2 == 0) { // проверка на чётность индексов
            cout << a[i] << "\n";
        }
    }
    */
    
    
    
    
    // Task 3
    /*
    int sum = 0; // сумма
    int n; // кол-во элементов
    const int size = 10; // размер массива
    int a[size]; // cоздаём массив(int)
    srand(time(0)); // для генерации случайных чисел
    for (int i = 0; i < size; i++) { // цикл for до size(массив)
        a[i] = random(-20, 20); // random  в диапазоне от -20 до 20
        cout << "Количество элементов: " << sizeof(n) << "\n"; // кол-во элементов
        
        if (a[i] > 0) {
            n++; // положительные элементы
            sum += a[i]; // cумма
            cout << "Сумма элементов: " << sum << "\n"; // cумма элементов
        }
        cout << "Среднее арифметическое: " << double(sum / n) << "\n"; // вывод среднего арифметического
        break;
    }
    */
    
    
    
    
    // Task 4
    /*
    srand(time(0));
    int digit = 0; // число
    int letter = 0; // буква
    int punctuation = 0; // пунктуация
    
    const int size = 100; // размер массива(100)
    char a[size]; // cоздаём массив(char)
    
    for (int i = 0; i < size; i++) {  // заводим цикл от управляющей переменной до size(массив)
        
        a[i] = rand() % 100; // случайные числа(100)
        
        if (isdigit(a[i])) { // проверка if на числа
            digit++;
        }
        else if (isalpha(a[i])) { // проверка if на буквы
            letter++;
            
        }
        else {  // проверка if на пунктуацию
            punctuation++;
        }
        cout << "Количество цифр в числе: " << digit << "\n";
        cout << "Количество элементов в буквах: " << letter << "\n";
        cout << "Количество элементов в знаках пунктуации: " << punctuation << "\n";
        cout << "\n";
    }
    */
    
    
    
    
    // Task 5
    /*
    srand(time(0));
    int digit; // число которое попадается кол-во раз в массиве
    int counter = 0;
    
    const int size = 100; // размер массива(100)
    int a[size]; // cоздаём массив(int)
    
    for (int i = 0; i < size; i++) { // заводим цикл for под управляющей переменной идём до size(массив)
        
        a[i] = rand() % 100; // cлучайные числа(100)
        cout << "Ввести число: " << "\n"; // ввод число от 0 до 100
        cin >> digit;
        cout << "\n";
        
        if (a[i] == digit) { //  условие if на проверку кол-во раз числа в массиве(a[i])
            counter++;
        }
        cout << "Встречается в элементах - " << a[i] << "\n"; // вывод
    }
    */
    
    
    
    
    // Task 6
    /*
    srand(time(0));
    const int size = 20; // размер массива
    int a[size]; // cоздаём массив(int)
    
    int suma = 0; // сумма
    
    while(true) {
        
        for (int i = 0; i < size; i++) {   //заводим цикл for под управляющей переменной идём до size(массив)
            
            a[i] = random(-10, 30);
            if (a[i] < 0) {   // проверка if на первый отрицательный элемент
                suma += a[i];  // cумма
                cout << "Сумма после первого отрицательного элемента: " << suma << "\n";
            }
        }
        break;
    }
    */
    
   
    
    
    // Task 7
    /*
    srand(time(0));
    const int size = 20; // размер массива(20)
    int a[size]; // массив(int)
    
    int max = a[19]; // переменная для (int max - if)(index(19), порядковый номер - 20)
    int min = a[0];  // переменная для (int min - if)(index(0), порядковый номер - 1)
    
    for (int i = 0; i < size; i++) { // цикл for по массиву(int max)
        
        a[i] = rand() % 20; // случайные числа(20)
        
        if (a[i] > max) { // if условие для max значения
            max = a[i];
        }
        for (int i = 0; i < size; i++) { // цикл for по массиву(int min)
            
            if (a[i] < min) { // if условие для min значения
                min = a[i];
            }
        }
        cout << "Максимальное значение: " << max << "\n";
        cout << "Минимальное значение: " << min << "\n";
        cout << "\n";
        
    }
    */
    
    
    
    
    
    // Task 8
    /*
    srand(time(0));
    const int size = 100; // размер массива(100)
    double a[size];  // массив(double)
    
    
    for (int i = 0; i < size; i++) { // цикл for по массиву для проверки вещественных элементов
        
        a[i] = rand() % 100; // cлучайные числа(100)
        
        if(a[i] == (int)a[i]) {  // if проверка(откидываем интовую часть
            cout << double(a[i]) << "\n"; // вывод после проверки if(double)
        }
        else {
            cout << a[i] << "\n";  // вывод всего массива с вещественными числами которые есть после проверки if
        }
    }
    */
    
    
    
    
    // Task 9
    /*
    srand(time(0));
    int сheck_with_digit;
    cout << "Нажмите 1 чтобы сделать проверку: ";
    cin >> сheck_with_digit;
    switch (сheck_with_digit) {
        case 1:
            cout << "Проверить на одноразрядные, двухразрядные и трёхразрядные числа" << "\n";
            break;
    }
    
    const int size = 200; // размер массива
    int a[size]; // массив(int)
    
    int single_digit = 0; // одноразрядные числа
    int two_digit = 0; // двухразрядные числа
    int three_digit = 0; // трёхразрядные числа
    
     
    for (int i = 0; i < size; i++) { // цикл for по массиву на разрядность чисел
        
        a[i] = rand() % 200; // cлучайные числа(200)
        
        if (a[i] < 9 ) { // проверка if на одноразрядные числа(до 9)
            
            single_digit++; // кол-во single_digit
            
        }
        
        else if (a[i] > 9 && a[i] < 99) { // проверка if на двухразрядные числа(начинаются от 10 и заканчиваются на 99)
            
            two_digit++; // кол-во two_digit
            
        }
        else if (a[i] > 100 && a[i] < 999) { // проверка if на трёхразрядные числа(начинаются от 100 до закачинаются на 999)
            
            three_digit++; // кол-во three_digit
        }
        cout << "Одноразрядные: " << single_digit << "\n";
        cout << "Двухразрядные: " << two_digit << "\n";
        cout << "Трёхразрядные: " << three_digit << "\n";
    }
    */
    
    
    
    
    
    
}
