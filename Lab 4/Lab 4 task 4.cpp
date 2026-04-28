#include <iostream>
using namespace std;

class Product {
public:
    string name;
    double price;

    // Base class constructor
    Product(string n, double p
    ) {
        name = n;
        price = p;
    }
};

class Electronics : public Product {
public:
    int warrantyYears;

    Electronics(string n, double p, int w) : Product(n, p) {
        warrantyYears = w;
    }

    void display() {
        cout << "Product: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Warranty: " << warrantyYears << " years" << endl;
    }
};

int main() {
    Electronics laptop("Laptop", 55000, 2);
    laptop.display();
    
    return 0;
}
