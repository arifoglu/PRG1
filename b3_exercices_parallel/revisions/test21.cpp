#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;


int main() {
    vector<int> v {1, -2, 3, -4, 5, -6};
   
   v.erase(remove_if(v.begin(), v.end(), [](int x) { return x <= 0; }), v.end());
   
   for (int e : v) {
        cout << e << ' ';
   }
   cout << endl;
    
    return 0;
}
