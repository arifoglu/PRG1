#include <iostream>
using namespace std;

template <typename T, typename U> int f(T,       U)  { return 1;} 
template <typename T>             int f(T,       T)  { return 2;} 
template <typename T>             int f(T,   short)  { return 3;} 
template <typename T>             int f(T,  double)  { return 4;} 
                                  int f(int,double)  { return 5;} 

int main() {
    //cout << f(int(),int()) << endl;
    //cout << f(int(),short()) << endl;
    //cout << f(int(),float()) << endl;
    //cout << f(short(),short()) << endl;
    //cout << f(short(),double()) << endl;
    //cout << f(int(),double()) << endl;
    //cout << f<>(int(),double()) << endl;
    //cout << f<double>(short(),short()) << endl;
    //cout << f<int,int>(short(),short()) << endl;

    
}                                  
