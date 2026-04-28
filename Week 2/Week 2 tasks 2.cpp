#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    // Function declarations
    void setDimensions(int l, int w);
    int area();
    int perimeter();
};

// Defining functions outside the class
void Rectangle::setDimensions(int l, int w) {
    length = l;
    width = w;
}

int Rectangle::area() {
    return length * width;
}

int Rectangle::perimeter() {
    return 2 * (length + width);
}

int main() {
    Rectangle rect;
    rect.setDimensions(10, 5);
    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Perimeter of Rectangle: " << rect.perimeter() << endl;
    return 0;
}
