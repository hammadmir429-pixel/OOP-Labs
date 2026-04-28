#include <iostream>
using namespace std;

class Calculator {
public:
    float num1, num2;

    float add() { return num1 + num2; }
    float subtract() { return num1 - num2; }
    float multiply() { return num1 * num2; }
    float divide() { 
        if(num2 != 0) return num1 / num2;
        else {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    int choice;

    cout << "Enter first number: ";
     cin >> calc.num1;
    cout << "Enter second number: ";
     cin >> calc.num2;

    cout << "\nChoose operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter choice: ";
    cin >> choice;

    if(choice == 1) cout << "Result: " << calc.add() << endl;
    else if(choice == 2) cout << "Result: " << calc.subtract() << endl;
    else if(choice == 3) cout << "Result: " << calc.multiply() << endl;
    else if(choice == 4) cout << "Result: " << calc.divide() << endl;
    else cout << "Invalid choice!" << endl;

    return 0;
}
