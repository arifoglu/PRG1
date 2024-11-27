#include <iostream>
using namespace std;

template <typename T, typename U>
T f(T a, U b){
    cout << "fonction est appelé: value1 = " << a << " value2 = " << b << endl; 
    return a;     
}

int main() {
    int x = 5;
    double y = 3.14;
    
    f(x,y);                    // T = int, U = double
    f(x,x);                    // T = int, U = int (U otomatic donustu)
    f(3,3);                    // T = int, U = int        

    return 0;
}

