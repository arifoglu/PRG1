#include <iostream>
using namespace std;

class C {
    public:
        C() { cout << "--> Constructor\n"; }
       ~C() { cout << "--> Destructor\n"; }
};

void f(int i) {
    cout << "f(" << i << ") debut\n";
    if (i > 0) {
        static C c;
        cout << "Static object in f(" << i << ")\n";
    } else {
        C c;
        cout << "Local object in f(" << i << ")\n";
    }
    cout << "f(" << i << ") fin\n";
}

int main() {
    cout << "main() : debut\n";
    f(1);
    f(0);
    f(2);
    cout << "main() : fin\n";
    return 0;
}
