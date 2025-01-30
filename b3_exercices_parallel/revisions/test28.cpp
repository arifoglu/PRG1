#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T,size_t N>
vector<T> enVecteur(const array<T,N>& arr){
   return vector<T>(arr.begin(),arr.end());
}

template<size_t N,typename T>
array<T,N> enTableau(const vector<T>& v){
    array<T,N> arr{};
    copy_n(v.begin(),min(v.size(),N),arr.begin());
    return arr;
}

int main() {
    array<int,4> a{1,2,3,4};
    vector v = enVecteur(a);
    array<int,6> b = enTableau<6>(v);
    array<int,2> c = enTableau<2>(v);

}