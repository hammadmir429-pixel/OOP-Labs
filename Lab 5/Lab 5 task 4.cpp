#include <iostream>
using namespace std;
class Printer {
public:
    void print_document()
     {
        cout << "Printing document..." << endl;
    }
};

class Scanner 
{
public: 
    void scan_document() 
    {
        cout << "Scanning document..." << endl;
    }
};

class Photocopier : public Printer, public Scanner
 {
public:
    void photocopy() 
    {
        cout << "Photocopy in progress:" << endl;
        print_document();
        scan_document();
    }
};

int main()
 {
    Photocopier pc;
    cout << "Photocopier Functions:" << endl;
    pc.print_document();
    pc.scan_document();
    cout << "\n Photocopy Method:" << endl;
    pc.photocopy();

    return 0;
}
