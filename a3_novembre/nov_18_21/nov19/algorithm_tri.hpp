#ifndef ALGORITHM_TRI_HPP
#define ALGORITHM_TRI_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <iomanip>
using namespace std;

void comb_sort(vector<int> & v, double shrink, size_t min_gap);
void insertion_sort(std::vector<int>& v);
void tri_fusion(vector<int> &v);
vector<int> fusion(const vector<int>& va, const vector<int>& vb);
void test_algorithm(vector<int>& data, double shrink, size_t min_gap, void (*sort_func)(vector<int>&, double, size_t));
void test_algorithm_insertion(vector<int>& data, void (*sort_func)(std::vector<int>&));
void test_algorithm_fusion(vector<int>& data, void (*sort_func)(vector<int>&));

#endif