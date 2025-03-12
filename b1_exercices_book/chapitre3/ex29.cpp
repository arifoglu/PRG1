#include <iostream>

using namespace std;


void f(){
    static int n = 0;
    n++;
    cout << "appel numéro " << n << "\n";
}

int main() {
    int n;
    f();
    f();
    f();
}
