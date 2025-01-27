#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const char* BOOL_EN_FRANCAIS [] = { "faux", "vrai" };

// A COMPLETER ICI
template<typename T,size_t N>
ostream& operator<<(ostream& os, const array<T,N>& arr){
    if(N == 0) os << "[vide]";
    if(N > 0){
           os << "[";
    for(size_t i = 0; i < N;++i){
        os << arr[i];
    }
    os << "]"; 
    }

    return os;
}
template<typename T>
T opposer(T t){
    return -t;
}
template<> bool opposer<bool>(bool t){return !t;}

template<typename T,size_t N,typename Func>
void transformer(array<T,N>& arr, Func f){
    for(T& t : arr)
        t = f(t);
}


int main() {
    
    cout << opposer(42) << " "
         << opposer(42u) << " "
         << boolalpha << opposer(true) << " "
         << opposer(false) << " "
         << opposer(-3.14) << endl;
    
   
    array<int,0> a0;                                      cout << a0 << endl;
    
    array<int, 4> a4 { 1, 2, 3,  4 };                     cout << a4 << endl;
    transformer(a4, opposer<int>);                        cout << a4 << endl;

    array<bool,0> b0;                                     cout << b0 << endl;
   
    array<bool, 5> b5 { true, false, false, true, true }; cout << b5 << endl;
    transformer(b5, opposer<bool>);                       cout << b5 << endl;
    
    array<double,0> c0;                                   cout << c0 << endl;
    
    array<double, 3> c3 { 1.61, 2.72, 3.14 };             cout << c3 << endl;
    transformer(c3, opposer<double>);                     cout << c3 << endl;

}