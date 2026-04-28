#include <iostream>
using namespace std;

class Display 
{
public:
    void showResult(float r) 
    {
        cout << "Result is on Screen: " << r << endl;
    }
};
class Calculator {
    Display disp; 
public:
    void add(float a, float b)
     {
        float answer = a + b;
        cout<<"The Result of Addition is:"<<endl;
        disp.showResult(answer);
        cout<<endl;
    }
    void multiply(float a, float b) 
    {
        float answer = a * b;
        cout<<"The Result of Multiplication is:"<<endl;
        disp.showResult(answer);
    }
};
int main() 
{
    Calculator myCalc;
    
    myCalc.add(10, 20);     
    myCalc.multiply(5, 4); 

    return 0;
}
