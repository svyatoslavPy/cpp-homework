#include <iostream>
using namespace std;



int main()
{
    
    int min = 0;
    int max = 100;
    int mid = (min + max) / 2;

    do {
        system("cls");
        cout << "Вас привествует угадыватель чисел" << endl;

        cout << "Is your number : " << mid << "  ?  \n\n";
        cout << "Too (h)igh\n";
        cout << "Too (l)ow\n";
        cout << "(c) orrect\n";
        cout << "(input) : ";

        char x;
        cin >> x;
        switch (x) {
        case 'h':
            min = mid;
            mid = (min + max) / 2;
            break;
        case 'l':
            max = mid;
            mid = (min + max) / 2;
            break;
        case 'c':
            cout << "Поздравляем вы угадали" << endl;
            system("pause");
            system("cls");
            exit(0);
            break;
        }
    } while (min < max);

}
