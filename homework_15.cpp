
#include <iostream>
using namespace std;


int main() {
    
   
    // task 1
    /*
    int length;
    cout << "Ввести длину лестниц: "; // длина лестниц
    cin >> length;
    
    int spaces = 0; // отступы
    
    int stair;
    cout << "Ввести кол-во лестниц: "; // кол-во лестниц
    cin >> stair;
     
    // внешний цикл
    for (int i = 0; i < length; i++) { // цикл for отвечает за количество "*" ( длина)
        
        // внутренний цикл
        for (int j = 0; j < stair; j++) { // цикл for отвечает за отрисовку самих лестниц (кол-во)
            
            cout << "*";
        }
        cout << "\n";
        for (int k = 0; k < spaces; k++) { // цикл for отвечает за отступы
            cout << " ";
        }
        spaces++;
    }
    */
    
    
    
    // task 2
    
    /*
    int spaces = 0;
    int stypenki;
    cout << "Введите кол-во ступенек: ";
    cin >> stypenki;
    
    
    for (int i = 0; i < stypenki; i++) { //отвечает за кол-во ступенек
        
        for (int j = 0; j < spaces; j++) {  // отступы
            
            cout << " ";
        }
        
        cout << "***" << "\n";
        for (int j = 0; i < spaces; j++) {
            
            cout << " ";
        }
        
        cout << " *" << "\n";
        for (int j = 0; i < spaces; j++) {
            cout << " ";
        }
        cout << " *";
        
    }
    */
    
    
}
