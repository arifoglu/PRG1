#ifndef FONCTIONS_VECTEURS_HPP
#define FONCTIONS_VECTEURS_HPP

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

ostream& operator<<(ostream & os, const vector<int> & v);
size_t longue_sequence(vector<int> & v);
bool compare_vecteurs(vector<int> & ,vector<int> &);
vector<int> operator+(const vector<int> & v1, const vector<int> & v2);
void tri_fusion(vector<int> &v);
vector<int> fusion(const vector<int> &,const vector<int> &);
vector<int> fibonacci(size_t n);

#endif