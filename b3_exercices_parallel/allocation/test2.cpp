#include <iostream>

using namespace std;

class C {
    public:
        C() {cout << "--> Constructor\n"; }
       ~C() {cout << "--> Destructor\n"; }
};

void f(int i) {
    cout << "f(" << i << ") debut\n";
    if(i)
        static C c;
    cout << "f(" << i << ") fin\n";
}


int main() {
    cout << "main() : debut\n";
    cout << "f()    : avant\n";

    //f(0);
    //f(1);
    //f(2);
    
    cout << "f()    : apres\n";
    cout << "main() : fin\n";
    return 0;
}
/* variable locale static
static C c; 
- burda c objesi 1 kez olusturulur.
- f() her cagrildiginda yeniden c objesi olusturulmaz.
- program sonunda yok edilir
*/

/* locale automatique
C c; 
- burda c objesi 1.kez olusturulur.
- f() bittiginde c objesi yok edilir.
- f() her cagrildiginda yeniden c objesi olusturulur.
- f() bittiginde c objesi yeniden yok edilir.
*/