#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>

using namespace std;

template<typename Iterator>
void display(Iterator first, Iterator last) {
    cout << "[";
    for (Iterator it = first; it != last; ++it) {
        if (it != first) cout << ", ";
        cout << *it; 
    }
    cout << "]" << endl;
}

int main () {
    vector<float> c1{1,2,3};
    display(begin(c1),end(c1));
    display(c1.begin(),c1.end());

    int t[] = {4,5,6};
    display(begin(t),end(t));
    display(t,t+3);
    
    return EXIT_SUCCESS;
}