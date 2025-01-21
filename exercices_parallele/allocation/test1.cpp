#include <iostream>

using namespace std;

class C {
    public:
        C() {cout << "--> Constructor\n"; }
       ~C() {cout << "--> Destructor\n"; }
};

//1) variable globale
// C c; 

void f() {
    cout << "f()    : debut \n"; 
    //2)variable locale static
    static C c;
    cout << "f()    : fin   \n"; 
}

int main() {
    cout << "main() : debut\n";
    cout << "f()    : avant\n";

    f();
    
    cout << "f()    : apres\n";
    cout << "main() : fin\n";
    return 0;
}