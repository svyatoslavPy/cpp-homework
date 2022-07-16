#include <iostream>
using namespace std;



int main()
{
    
    setlocale(0, "rus");
    
    // task 1
    //int number;
    //cout << "Ввести с клавиатуры целое число: ";
    //cin >> number;
    //for (int i = 2; i < number;  i++)
    //{
    //    if (number % i == 0) {
    //        cout << "Непростое ";
    //    }
    //    else {
    //        cout << "Простое ";
    //    }
    //}
    
    
    
    // task 2
    
    //int pos = 0; // положительные числа
    //int neg = 0; // орицательные числа
    //int null = 0; // нулевые числа
    //for (int number = -100; number <= 100; number++) // - цикл for
    //{
    //    if (number > 0) {
    //        pos++;
    //        cout << "Процент положительных чисел: " << pos / 0.1 << endl;
    //    }
    //    else if (number < 0) {
    //        neg++;
    //        cout << "Процент отрицательных чисел: " << neg / 0.1 << endl;
    //    }
    //    else {
    //        null++;
    //        cout << "Процент нулевых чисел: " << neg / 0.1 << endl;
    //    }
    //}
    
    
    // task 3
    /*
     int num;
     cout << "Введите число: ";
     cin >> num;
     
     while(num > 0) {
     
     int number_one = num % 10;
     int number_two = num / 10;
     
     if (number_two == number_one) {
     cout << "Есть ввёденные числа одинаковые";
     }
     num /= 10;
     
     else {
     cout << "Нету одинаковых чисел";
     }
     
     } */
    
    
    
    // task 4
    /*
     int count= 0;
     int i;
     for (i = 0; i <= 99999999; i++) {
     
     int a = i % 10;
     int b = (i / 10) % 10;
     int c = (i / 100) % 10;
     int d = (i / 1000) % 10;
     int e = (i / 10000) % 10;
     int f = (i / 100000) % 10;
     int g = (i / 1000000) % 10;
     
     if (a != b && a != c && a != d && a != e && a != f && a != g && b != c && b != d && b != e && b != f && b != g  && c != d && c != e && c != f && c != g  && d != e && d != f && d != g && e != f && e != g && f != g && != g &&
     i % 12345 == 0) {
     printf("%08d\n", i);
     count++;
     }
     cout << "Count: " << count;
     */
    
    
    
}
