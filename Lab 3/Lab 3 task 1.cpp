#include <iostream>
using namespace std;

class Account {
private:
    double balance;
public:
    void setBalance(double b) 
    {
        if(b >= 0)
         balance = b;
        else cout << "Invalid Amount!" << endl;
    }
    double getBalance() 
    {
     return balance;
      }
};

int main() {
    Account myAcc;
    double amt;

    cout << "Enter balance: ";
    cin >> amt;

    myAcc.setBalance(amt);
    cout << "Current Balance: " << myAcc.getBalance() << endl;

    return 0;
}
