#include "tri.hpp"
#include <algorithm>

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
template<typename T,size_t N>
void tri_generique(array<T,N>& a){
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
//Explicit instantiation
template void tri_generique<int>(vector<int>&);
template void tri_generique<string>(vector<string>&);

template void tri_generique<string, 4>(array<string, 4>&);
template void tri_generique<int, 6>(array<int, 6>&);

template void tri_generique<int, 6>(int (&t)[6]);
template void tri_generique<double, 6>(double (&t)[6]);