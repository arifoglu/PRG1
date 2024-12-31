#include <iostream>
#include <array>
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
    //C c;
    //c = 5.0;
    //cout << "x ";
    //cout << endl;

    //{ C c(6.0);
    //  const C d = c;            // copy constructor
    //  cout << "x ";
    //}
    //cout << endl;

    //{ C c[2];
    //  c[0] = C(7.0);
    //  cout << "x ";
    //}
    //cout << endl;

    //{ C c(8.0);
    //  C d(9.0);
    //  d = c;
    //  cout << "x ";
    //  cout << "x ";
    //}
    //cout << endl;

    //{ array<C,3> a {{ C(10.0), C(11.0), C(12.0) }};
    //  a[2] = a[0];
    //  cout << "x ";
    //}
    //cout << endl;

    return 0;
}
