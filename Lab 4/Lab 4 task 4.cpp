#include <iostream>
using namespace std;

class Locker {
public:
    Locker() {
        cout << "Locker allocated to customer." << endl;
    }
    ~Locker() {
        cout << "Locker returned by customer." << endl;
    }
};

int main() {
    cout << "--- Creating Stack Object ---" << endl;
    {
        Locker L1; 
    } 
    cout << "Block ended ." << endl << endl;
    
    cout << "--- Creating Heap Object ---" << endl;
    Locker* L2 = new Locker(); 

    cout << "Deleting Heap Object manually..." << endl;
    delete L2; 

    return 0;
}
