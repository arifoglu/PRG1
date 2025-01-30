#include <iostream>

using namespace std;

class C {
    public:
        C() {cout << "--> Constructor\n"; }
       ~C() {cout << "--> Destructor\n"; }
};

void f() {
    cout << "f() : debut\n";
    {C c;}
    cout << "f() : fin\n";
}


int main() {
    cout << "main() : debut\n";
    cout << "f()    : avant\n";
    
    f();

    cout << "f()    : apres\n";
    cout << "main() : fin\n";
    return 0;
}
