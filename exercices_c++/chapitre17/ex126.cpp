#include <iostream>
using namespace std;

template<typename T, typename U> 
T fct(T a, U b, T c);

int main() {
    int n, p, q;
    float x;
    char t[20];
    char c;

    //fct (n, p, q) ;        // appel I    => juste => fct(int,int,int)  
    //fct (n, x, q) ;        // appel II   => juste => fct(int,float,int)  
    //fct (x, n, q) ;        // appel III  => false
    //fct (t, n, &c) ;       // appel IV   => juste => fct(char*,int, char*)      
    
    return 0;
}

