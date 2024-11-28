#include <iostream>
using namespace std;

template <typename T>
void f(T a){
    cout << "fonction est appelé\n";
}

int main() {
    f(5);           // T = int
    f(3.16);        // T = double
    f('a');         // T = char    

    
    return 0;
}