#include <iostream>

using namespace std;

class C {
    public:
        C() {cout << "--> Constructor\n"; }
       ~C() {cout << "--> Destructor\n"; }
};



C* f() {
    cout << "f()    : debut \n"; 
    C* p = new C;
    cout << "f()    : fin   \n"; 
    return p;
}

int main() {
    cout << "main() : debut\n";
    cout << "f()    : avant\n";

    C* q = f();
    
    cout << "f()    : apres\n";
    
    delete q;

    cout << "main() : fin\n";
    return 0;
}