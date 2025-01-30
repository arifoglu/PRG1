#include <iostream>
using namespace std;

template <typename T, typename U> int fct(T,       U)      { cout << "1" ;} // 1
template <typename T, typename U> int fct(T*,      U)      { cout << "2" ;} // 2
template <typename T>             int fct(T,       T)      { cout << "3" ;} // 3
template <typename T>             int fct(T,       int)    { cout << "4" ;} // 4
                                  int fct(int,     int)    { return 55; }; // 5
                                  int fct(int*,    float)  { return 66; };// 6

int main() {
    int     i  = 1;
    char    c  = 65;     // code ASCII de 'A'
    short   s  = 2;
    float   f  = 1.7f;
    double  d  = 3.1;
    int*    pi = &i;     // ptr sur i
    char*   pc = &c;     // ptr sur c
    float*  pf = &f;     // ptr sur f
    double* pd = &d;     // ptr sur d

    fct(pc,pd);
}                                  
