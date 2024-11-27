#include <iostream>
using namespace std;

template <typename T,typename U>
void f(T a, U b){
    cout << "fonction est appelé: a = " << a << ", b = " << b << endl;      
}

int main() {
    f<double>(3.4,10) ;          // T = double, U = int    (U otomatik donustu)
    f<int>(7,3.4);               // T = int,    U = double (U otomatik donustu)

    return 0;
}