#include <iostream>
using namespace std;

class C {
    double data;
public:
    C():data(1.0)                           { cout << "1 "; }
    C(double val):data(val)                 { cout << "2 "; }
    C(const C& c):data(c.data + 3)          { cout << "3 "; }
    C& operator=(const C& c)                { cout << "4 "; data = c.data; return *this; }
    ~C()                                    { cout << data << " "; }
};

int main() {
    //1)
    //C c1(5.0);
    //C c2 = c1;                    
    
    //C c1;
    //c1 = C(7.0);                  

    //C c1(3.0);
    //C c2 = c1;
    //c2 = C(8.0);

    //C c1;
    //C c2(4.0);
    //c1 = c2;
    //c1 = C(6.0);                  

    //C c1;
    //C c2(5.0);
    //C c3 = c2;
    //c1 = C(7.0);
    //c2 = c1;                      

    //C c1(2.0);
    //C c2 = c1;
    //c1 = C(5.0);
    return 0;
}
