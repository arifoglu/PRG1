#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    const size_t N = 4;
    int t[] = {2, 3, 5, 9};
    for (size_t i = N - 1; i >= 0; --i)
        for (size_t j = 1; j < N - i; j++)
            cout << t[i] << " ";
    cout << endl;

    const size_t M = 5;
    int t2[] = {1, 2, 3, 5, 9};
    for (size_t i = M - 1; i >= 1; i -= 2)
        for (size_t j = 0; j < i; j++)
            cout << t2[j] << " ";
    cout << endl;

    array<int, 5> a;
    auto it = a.end() - 4;
    for (int i = 0; i < 4; i++) *(it + i) = i + 2;
    fill(it, a.end(), 18);
    for (auto x : a) cout << x << " ";
    cout << endl;

    vector<int> v = {-2, 4, 7, 9, 6, 3};
    auto it1 = max_element(v.begin(), v.end());
    auto it2 = min_element(v.begin(), v.end());
    v.erase(it1, it2);
    for (auto x : v) cout << x << " ";
    cout << endl;
}
