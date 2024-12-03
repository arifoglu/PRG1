#ifndef TRI_HPP
#define TRI_HPP

#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <string>
#include <span>
#include <utility>
using namespace std;

template <typename T>
void tri_generique(vector<T>& v);

template <typename T, size_t N>
void tri_generique(array<T, N>& a);

template <typename T,size_t N>
void tri_generique(T (&t)[N]);


#endif