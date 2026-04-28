#include <iostream>
using namespace std;

class Temperature {
public:
    float celsius;

    // Formula to convert
    float convertToFahrenheit() {
        return (celsius * 9/5) + 32;
    }

    void display() {
        cout << "Temperature in Fahrenheit: " << convertToFahrenheit() << endl;
    }
};

int main() {
    Temperature temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp.celsius;
    temp.display();
    return 0;
}
