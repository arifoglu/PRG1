#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

template<typename Iterator>
void remove(Iterator first,Iterator last){
    first = unique(first,last);
    
    first = last;
}

int main() {
   vector<int> v {1, 2, 2, 3, 4, 4, 5};

   remove(v.begin(),v.end());

   for (int e : v) {
        cout << e << ' ';
   }
   cout << endl;
    
    return 0;
}
