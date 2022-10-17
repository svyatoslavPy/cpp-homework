#include <iostream>
using namespace std;

// recursia
void recursion(int x) {
    if (x > 0) {
        recursion(x-1);
    }
}

int main() {
    recursion(5);
}
