#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

template<typename T>
bool is_non_positive(T x){return x <= 0;}


int main() {
   vector<int> v {1, -2, 3, -4, 5, -6};
   
   v.erase(remove_if(v.begin(), v.end(),is_non_positive<int>), v.end());
   
   //v.erase(remove_if(v.begin(),v.end(),[](int n){return n <= 0;}),v.end());
   
   for (int e : v) {
        cout << e << ' ';
   }
   cout << endl;
    
    return 0;
}
