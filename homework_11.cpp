#include <iostream>
using namespace std;



int main()
{
         //    homework_11-(While)

    // Task 1
    /*
    setlocale(0, "rus");
    double result;
    int start = 1;
    int end = 5;
    int current = start;
    cout << "Введите градусы в цельсиях : ";
    cin >> current;
    while (current <= end) {
        result = 1.8 * current + 32;
        cout << current << endl << result << endl;
        current++;
    }
    */



    /* // task 2
    setlocale(0, "rus");
    int number;
    int i;
    cout << "Вывести с клавиатуры целое число: ";
    cin >> number;
    i = number;
    while (i > 0) {
        if (number % i == 0) {
            cout << "Результат: " << i;
        }
        i--;
    }
    */



    // task 3
    /*
    setlocale(0, "rus");
    int reverse = 0;
    int temp;
    int number;
    
    cout << "Вывести с клавиатуры челое число: ";
    cin >> number;
    while (number > 0) {
        temp = number % 10;
        reverse = (reverse * 10) + temp;
        number /= 10;
    }
    cout << reverse;
    */

}
