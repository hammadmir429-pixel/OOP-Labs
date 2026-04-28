#include <iostream>
using namespace std;
class Calculator {
public:
    float add(float a, float b) { return a + b; }
    float multiply(float a, float b) { return a * b; }
};
class Student {
public:
    string name;
    void useCalculator(Calculator* calc, float a, float b) {
        cout << name << " is using the shared calculator..." << endl;
        cout << "Sum: " << calc->add(a, b) << endl;
    }
};
int main() {
    Calculator sharedCalc;
    Student s1, s2;
    s1.name = "Hammad";
    s2.name = "Ali";
    cout << "---  Shared Calculator ---" << endl;
    s1.useCalculator(&sharedCalc, 20, 30);
    cout << endl;
    s2.useCalculator(&sharedCalc, 5, 4);
    return 0;
}
