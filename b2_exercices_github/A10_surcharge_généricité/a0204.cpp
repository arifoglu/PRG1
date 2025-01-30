#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <string>
using namespace std;

template <typename T>
void tri_generique(vector<T>& v){
    for(size_t i = 0; i < v.size();++i)
    {
        size_t min_index = i;
        for(size_t j = i + 1; j < v.size() ;++j)
        {
            if(v[j] < v[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            swap(v[i],v[min_index]);
        }
    }
}
template<typename T>
void tri_generique(array<T,4>& a){
    for(size_t i = 0; i < a.size();++i)
    {
        size_t min_index = i;
        for(size_t j = i + 1; j < a.size();++j)
        {
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            swap(a[i],a[min_index]);
        }
    }
}

template<typename T,size_t N>
void tri_generique(T (&t)[N]){
    for(size_t i = 0; i < N;++i)
    {
        size_t min_index = i;
        for(size_t j = i + 1; j < N;++j)
        {
            if(t[j] < t[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            swap(t[i],t[min_index]);
        }
    }
}

int main() {
    // vector
    vector<int> v{6,2,8,7,1,3}; 
    tri_generique(v);
    for(auto e : v)
    cout << e ;
    cout << endl;

    //array (array<string , 4>)
    array  a      {"chien"s, "chat"s, "souris"s, "poisson"s};
    size_t n = sizeof(a) / sizeof(a[0]);
    tri_generique(a);
    for(size_t i = 0; i < n;++i){
        cout << a[i] << " ";
    }
    cout << endl;

    double t[] = {6.1, 2.2, 8.3, 7.4, 1.5, 3.6};
    tri_generique(t);
    for (auto e : t) {
        cout << e << " ";
    }
    cout << endl;
   return EXIT_SUCCESS;
}