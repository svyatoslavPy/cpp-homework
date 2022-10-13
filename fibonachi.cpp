#include <iostream>
using namespace std;

int fibonachi(int num) {
    if (num == 0) {
        return 0;
    }
    else if (num == 1) {
        return 1;
    }
    return fibonachi(num - 1) + fibonachi(num - 2);
}


int main() {
    int num;
    cin >> num;
    cout << fibonacci(number);
}
