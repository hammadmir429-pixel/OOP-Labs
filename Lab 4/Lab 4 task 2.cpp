#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Parameterized Constructor 
    BankAccount(string accNum, string holder, double bal)
     {
        accountNumber = accNum;
        accountHolder = holder;
        balance = bal;
    }

    void showAccountDetails()
     {
        cout << "Account No: " << accountNumber << endl;
        cout << "Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    
    BankAccount myAcc("PKR12345678", "Hammad Mir", 100000);
    myAcc.showAccountDetails();
    return 0;
}
