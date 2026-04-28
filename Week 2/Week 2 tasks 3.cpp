#include <iostream>
using namespace std;

class Voter {
public:
    char name[50];
    int age;

    void setDetails() {
        cout << "Enter voter name: "; 
        cin >> name;
        cout << "Enter age: "; 
        cin >> age;
    }

    // Function to check eligibility
    bool isEligible() {
        if (age >= 18) 
            return true;
        else 
            return false;
    }
};

int main() {
    Voter v;
    v.setDetails();

    if (v.isEligible()) {
        cout << v.name << " is eligible to vote." << endl;
    } else {
        cout << v.name << " is not eligible to vote." << endl;
    }
    return 0;
}
