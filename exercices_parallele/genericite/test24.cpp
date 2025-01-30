#include <iostream>
#include <string.h>
using namespace std;

template<typename T, typename U> void f(T, U ) { cout << "1"; } 
template<typename T, typename U> void f(T, U*) { cout << "2"; } 
template<typename T>             void f(T, T*) { cout << "3"; } 
template<typename T>             void f(T, T ) { cout << "4"; } 
template<typename T>             void f(T, int){ cout << "5"; } 
                            void f(double, int){ cout << "6"; } 


int main() {
    float g; 
    int i;
    
    //f(i,g);
    //f(g,i);
    //f(i,&g);
    //f(g,g);
    //f(&i,&i);
    //f(i,&i);
    //f(g+1.,i);
    //f(g,i+1);
    //f(i,i);
    //f(i*g,g+i);


    return 0;
}

