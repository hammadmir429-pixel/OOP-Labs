#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance(int f, float i)
     {
        feet = f;
        inches = i;
    }

    // Overloading == operator
    bool operator == (Distance d2) 
    {
        if (feet == d2.feet && inches == d2.inches) 
        {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Distance dist1(5, 6.5);
    Distance dist2(5, 6.5);
    Distance dist3(6, 2.0);
    if (dist1 == dist2)
     {
        cout << "Dist1 and Dist2 are equal." << endl;
    } else {
        cout << "Dist1 and Dist2 are not equal." << endl;
    }
    cout<<endl;
    if (dist1 == dist3) {
        cout << "Dist1 and Dist3 are equal." << endl;
    } else {
        cout << "Dist1 and Dist3 are not equal." << endl;
    }

    return 0;
}
