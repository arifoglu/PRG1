#include <iostream>
using namespace std;

template <typename T,typename U>
void f(T a,U b){
    cout << "fonction est appelé: a = " << a << ", b = " << b << endl;      
}

int main() {
    f(5,3.14);        // T = int ,         U = double  
    f("A",10);       //  T = char,         U = int    
    f("ABC",10);     //  T = const char *, U = int 
       

    return 0;
}