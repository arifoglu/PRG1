#include <iostream>
using namespace std;

template <typename T, typename U> int f(T,       U)  { return 1;} 
template <typename T>             int f(T,       T)  { return 2;} 
template <typename T>             int f(int,     T)  { return 3;} 
template <typename T>             int f(T,   short)  { return 4;} 
template <typename T>             int f(int, short)  { return 5;} 

int main() {
    char c;
    short s;
    int i;
    float x;
    
    //cout << f(x,i) << endl;
    //cout << f(i,i) << endl;
    //cout << f(s,i) << endl;
    //cout << f(c,c) << endl;
    //cout << f(x,s) << endl;
    //cout << f(i,s) << endl;
    //cout << f(c,s) << endl;
    //cout << f(x,x) << endl;
    //cout << f(i,x) << endl;
    //cout << f(s,x) << endl;
    //cout << f(c,x) << endl;

    
}                                  
