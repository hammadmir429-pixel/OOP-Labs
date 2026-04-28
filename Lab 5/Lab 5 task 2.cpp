#include <iostream>
using namespace std;
class Person
 {
public:
    string name;
    int age;
    void display_person()
    { cout << "Name: " << name ;
    cout<<" Age: " << age << endl; 
    }
};

class Employee : public Person 
{
public:
    int employee_id;
    void display_employee()
     { cout << "ID: " << employee_id << endl; }
};

class Manager : public Employee 
{
public:
    string department;
    void display_manager()
     { cout << "Department: " << department << endl; }
};

int main() {
    Manager m;

    cout << "Enter Manager Name: "; cin >> m.name;
    cout << "Enter Age: "; cin >> m.age;
    cout << "Enter Employee ID: "; cin >> m.employee_id;
    cout << "Enter Department: "; cin >> m.department;

    cout << "\n--- Manager Information ---" << endl;
    m.display_person();
    m.display_employee();
    m.display_manager();

    return 0;
}
