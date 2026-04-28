#include <iostream>
using namespace std;
class Employee 
{
public:
    string name;
    float salary;
    void display_employee() 
    { cout << "Name: " << name ;
    cout<< " Salary: " << salary << endl;
     }
};

class Developer : public Employee
 {
public:
    string lang;
    void display_developer() 
    { cout << "Language: " << lang << endl; }
};

class Designer : public Employee
 {
public:
    string tool;
    void display_designer() 
    { cout << "Tool: " << tool << endl; }
};

int main()
 {
    Developer dev;
    Designer des;

    cout << "Enter Developer Name: "; 
    cin >> dev.name;
    cout << "Enter Language: ";
     cin >> dev.lang;
    dev.salary = 50000;

    cout << "Enter Designer Name: "; 
    cin >> des.name;
    cout << "Enter Tool: ";
     cin >> des.tool;
    des.salary = 45000;

    cout << "\n--- Developer Info ---" << endl;
    dev.display_employee();
    dev.display_developer();

    cout << "\n--- Designer Info ---" << endl;
    des.display_employee();
    des.display_designer();

    return 0;
}
