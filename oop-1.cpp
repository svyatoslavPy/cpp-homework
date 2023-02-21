#include <iostream>
using namespace std;

class Fraction {
private:
  int numerator;
  int denominator;

public:
  void Input() {

    cout << "Введите числитель: ";
    cin >> numerator;
    cout << "Введите знаменатель: ";
    cin >> denominator;
  }

  void OutPut() {
    cout << "Числитель: " << numerator << endl;
    cout << "Знаменатель: " << denominator << endl;
  }

  void Plus(int number) {
    cout << number << " " << numerator << "/" << denominator << endl;
  }

  void Minus(int number) {
    cout << numerator - (number * denominator) << "/" << denominator << endl;
  }

  void Multiple(int number) {
    cout << numerator * number << "/" << denominator << endl;
  }

  void Division(int number) {
    int newDenominator = denominator * number;
    bool checking = true;

    for (int i = numerator; i != 0; i--) {
      if (numerator % i == 0 && newDenominator % i == 0) {
        cout << numerator / i << "/" << newDenominator / i << endl;
        checking = false;
        break;
      }
    }
    if (checking)
      cout << numerator << "/" << newDenominator << endl;
  }
};

int main() {
  Fraction fraction;

  fraction.Input();
  cout << endl;

  fraction.Plus(12);
  cout << endl;

  fraction.Minus(2);
  cout << endl;

  fraction.Multiple(6);
  cout << endl;

  fraction.Division(3);
}
