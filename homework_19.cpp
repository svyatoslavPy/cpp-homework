
#include <iostream>
using namespace std;

int random (int min, int max) {  // функция для диапазона случайных чисел
    max++;
    return abs(rand()%(max-min))+min;
}

int main() {
    
    srand(time(0));
    rand();
    
    int index = 0; // переменная счётчик
    int k; // число - k(повт места)
    cout << "Введите соседнии места: ";
    cin >> k;
    
    int M; // M рядов
    cout << "Введите ряд: ";
    cin >> M;
    
    int N; // N мест
    cout << "Введите кол-во мест: ";
    cin >> N;
    
    
    cout << "Информация об проданных билетах: " << "\n\n";
    
    
    int arr[M][N]; //
    
    for (int i = 0; i < M; i++) {
        
        for (int j = 0; j < N; j++) {
            
            arr[i][j] = random(0, 1);
        }
    }
    
    
    for (int i = 0; i < M; i++) {
        
        for (int j = 0; j < N; j++) {
            
            
            cout << arr[i][j] << " ";
        }
        cout << "\n";
        
    }
    cout << "\n";
    for (int i = 0; i < M; i++) {
        
        for (int j = 0; j < N; j++) {
            
            if (arr[i][j] == 0)  {
                index++;
                
                if (index == k) {
                    cout << "Место свободно" << "\n";
                }
            }
            else {
                index = 0;
                cout << "Место занято" << "\n";
            }
        }
        index = 0;
        cout << "\n";
    }
}



