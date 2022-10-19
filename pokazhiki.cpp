#include <iostream>
using namespace std;

int main() {
    
    const int size = 5;
    int i = 0;
    int *arr = new int[size]{2, 3, 4, 5, 6};
    int *copyarray = new int[size];
    
    
    for (int* ptr = arr; ptr <= &arr[4]; ptr++) {
        copyarray[i++] = *ptr;
    }
    
    
    for (int* ptr = copyarr; ptr <= &copyarr[4]; ptr++) {
        cout << *ptr;
    }
    cout << endl << endl;
    
    
    delete[] arr;
    delete[] copyarray;
    
    
    const int size_arr = 5;
    int* array = new int[size_arr] = {2, 3, 4, 5, 6};
    
    for (int* ptr = array + 4; ptr >= &array[0]; ptr--) {
        cout << *ptr;
    }
    delete[] array;
    
    
    int number = 0;
    int a = 0;
    int h = 0;
    const int size_array = 5;
    int** arrays = new int* [size_arrays];
    int** copyarrays = new int* [size_arrays];
    
    
    for (int i = 0; i < size_arrays; i++) {
        arrays[i] = new int[size_arrays];
        for (int j = 0; j < size_arrays; j++) {
            arrays[i][j] = number++;
        }
        number = 0;
    }
    
    for (int i = 0; i < size_arrays; i++) {
        copyarray[i] = new int[size_arrays];
    }
    
    
    for (int** ptr = arrays + 16; ptr >= &arrays[0]; ptr--) {
        copyarrays[a++][h] = **ptr;
        if (a % 10 == 0) {
            h++;
        }
    }
    
    for (int** ptr = copyarray; ptr <= &copyarray[0]; ptr++) {
        cout << **ptr;
    }
    
    delete[] arrays;
    delete[] copyarrays;
}
