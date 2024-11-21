#include "generic2.hpp"

template <typename T> 
T minimum(T a, T b){
    return a < b ? a : b;
}

template int minimum(int a, int b);
template double minimum(double a, double b);