#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v{2,3,5};
    for(int val : v)
        val *= val;
    for(int i : v)
        cout << i ;    
    
    return 0;
}
