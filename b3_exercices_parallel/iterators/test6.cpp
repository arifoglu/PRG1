#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main () {
    vector<int> v{10,20,30,40,50};

    auto first = v.begin() + 1;
    auto last = v.end() - 1;

    for(auto it = first; it!= last;++it){
        cout << *it ;
    }

    return EXIT_SUCCESS;
}