#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    // 1. Default constructor
    Rectangle()
     {
        length = 1.0;
        width = 1.0;
    }

    // 2. Parameterized constructor
    Rectangle(float l, float w) 
    {
        length = l;
        width = w;
    }

    // 3. Overload constructor
    Rectangle(float s) 
    {
        length = s;
        width = s;
    }

    void display() {
        float a = length * width;
        cout << "Length: " << length << " Width: " << width << " Area: " << a << endl;
    }
};

int main() 
{
    Rectangle r1;
    Rectangle r2(10, 5);
    Rectangle r3(10);

    cout << "Default Constructor:" << endl;
    r1.display();
    cout << endl; 
cout << " Parameterized Constructor:" << endl;
    r2.display();
    cout << endl;
cout << "Overload Constructor:" << endl;
    r3.display();
    cout << endl;

    return 0;
}
