#include <iostream>
using namespace std;

template <typename T,typename U>
void f(T a, U b){
    cout << "fonction est appelé: a = " << a << ", b = " << b << endl;      
}

int main() {
    f<double,int> (5.5,10);        // T = double, U = int
    f<int,const char*>(3,"ABC");   // T = int   ; U = const char* 

    //////////eger type yazilmazsa
    //f(5.5,10); //automatiqement    // T = double, U = int; 
    //f(3,"ABC");                   // T = int   ; U = const char* 


    return 0;
}