#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor called" << endl;
    }
};
class Car : public Vehicle {
public:
    Car() {
        cout << "Car constructor called" << endl;
    }
};

class ElectricCar : public Car {
public:
    string model;

    ElectricCar(string m) {
        model = m;
        cout << "ElectricCar constructor called" << endl;
        cout << "Model Name: " << model << endl;
    }
};

int main() {
    ElectricCar myTesla("Tesla Model 3");

    return 0;
}
