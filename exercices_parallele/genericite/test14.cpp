#include <iostream>
using namespace std;

template <typename T>
T f(T a){
    cout << "fonction est appelé: value = " << a << endl; 
    return a;     
}

int main() {
    int x = 5;
    double y = 3.14;
    f(x);               // T = int
    f(y);               // T = double
    return 0;
}

