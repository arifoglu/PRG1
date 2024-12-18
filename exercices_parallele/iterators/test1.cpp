#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <list>
#include <set>

using namespace std;

template<typename Iterator>
void d(Iterator first, Iterator last) {
    cout << "[";
    
    for (Iterator it = first; it != last; ++it) {
        if (it != first) cout << ", ";
        cout << *it;
    }
    
    cout << "]\n";
}

int main () {
    vector<float> c1{1,2,3} ; d(c1.begin(),c1.end());
    array<int,3>  c2{4,5,6} ; d(c2.begin(),c2.end());
    list<double>  c3{7,8}   ; d(c3.begin(),c3.end());
    set<short>    c4{9,10,11};d(c4.begin(),c4.end());

    
    return EXIT_SUCCESS;
}