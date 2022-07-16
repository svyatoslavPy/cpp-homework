

#include <iostream>
using namespace std;

int random (int min, int max) {  // функция для диапазона случайных чисел
    max++;
    return abs(rand()%(max-min))+min;
}

int main() {
   
    //  task 1
    /*
    const int strok = 5;
    const int kolumn = 4;
    
    int arr[strok][kolumn] = {};
    
    for (int i = 0; i < strok; i++) {
        
        for (int j = 0; i < kolumn; i++) {
        
            arr[i][j] = random(0, 100);
            cout << arr[i][j] << " ";
        }
    }
     */
    
    
    
    
    
    //  task 2
    /*
    const int strok = 5;
    const int kolumn = 5;
    
    cout << "Вывод массива: " << "\n\n";
    
   char arr[strok][kolumn] = {
     {'*','*','*','*','*'},
     {'*','*','*','*','*'},
     {'*','*','*','*','*'},
     {'*','*','*','*','*'},
     {'*','*','*','*','*'}
   };
    
    for (int i = 0; i < strok; i++) {
        
        for (int j = 0; j < kolumn; j++) {
            
            
            cout << arr[i][j] << "   ";
        }
        cout << "\n\n";
    }
    cout << "Вариант А: ";
    cout << "\n\n";
    for (int i = 0; i < strok; i++) {
        
        for (int j = 0; j < kolumn; j++) {
            
            if (i == j || j > i) {
                
                cout << arr[i][j];
            }
        }
        cout << "\n\n";
    }
    cout << "Вариант Б: ";
    cout << "\n\n";
    for (int i = 0; i < strok; i++) {
        
        for (int j = 0; j < kolumn; j++) {
            
            if (i == j || j < i) {
                
                cout << arr[i][j];
            }
        }
        cout << "\n\n";
    }
     */
    
}
    
    
     
