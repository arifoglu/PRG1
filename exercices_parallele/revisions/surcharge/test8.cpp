#include <iostream>
#include <array>

using namespace std;

template<typename T, size_t n>
using Ligne = array<T, n>;

template<typename T, size_t n, size_t m>
using Matrice = array<Ligne<T, m>, n>;


template<typename T, size_t n, size_t m>
ostream& operator<<(ostream& os, const Matrice<T, n, m>& matrice) {
    for (size_t i = 0; i < n; ++i) {
        os << "[ ";
        for (size_t j = 0; j < m; ++j) {
            os << matrice[i][j] << " ";
        }
        os << "]\n";
    }
    return os;
}
template<typename T,size_t n>
ostream& operator<<(ostream& os,const array<T,n> & arr){
    os << "[";
    for(const auto & e : arr)
        os << e;
    os << "]";
    return os;
}

int main() {
array<array<int, 3>, 2> m1 = {1, 2, 3, 4, 5, 6}; 
   cout << m1 << "\n\n"; 
 
   cout << m1[0] << " ... " << m1[1] << "\n\n"; 
 
   array<array<double, 4>, 3> m2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
11}; 
   cout << m2;

    return 0;
}
