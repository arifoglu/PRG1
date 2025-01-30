#include <iostream>
#include <string.h>
using namespace std;

template <typename T, typename U> void f(T,  U)    {cout << 1 << endl;} //1
template <typename T, typename U> void f(T*, U)    {cout << 2 << endl;} //2
template <typename T>             void f(T,  T)    {cout << 3 << endl;} //3
template <typename T>             void f(T, int)   {cout << 4 << endl;} //4
                                  void f(int,int)  {cout << 5 << endl;} //5

int main() {
    char c;
    int i ;
    double d;
    //f(c,d);             //  1
    //f(&c,d);            //  1 or 2 => 2 plus specialisé
    //f(&c,&c);           //  Ambiguité 
    //f(d,d);             //  3 
    //f(&i,&i);           //  Ambiguité
    //f(d,i);             //  1 or 4 => 4 plus specialisé
    //f(i,i);             //  3 or 5 => 5 plus specialisé
    //f(d,d);             //  3  
    return 0;
}

