#include <iostream>
using namespace std;

class Student {
public:
    char name[50];
    int rollNumber;
    float marks;

    // Function inside class
    void getData() {
        cout << "Enter student name: "; cin >> name;
        cout << "Enter roll number: "; cin >> rollNumber;
        cout << "Enter marks: "; cin >> marks;
    }

    // Function inside class
    void displayData() {
        cout << "\n--- Student Record ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.getData();
    s.displayData();
    return 0;
}
