#include <iostream>
#include <vector>
#include <iomanip>
#include <span>
using namespace std;

using Mat = vector<vector<int>>;

Mat generer(span<const int> val,span<const size_t> tailles){
    Mat v(tailles.size());
    size_t w = 0;
    for(size_t i = 0; i<tailles.size();++i){
        for(size_t j = 0; j < tailles[i];++j){
            v[i].push_back(val[w++]);
        }
    }
}

int main() { 
   { 
      const vector<int> contenu{1, 2, 3, 4, 5, -1, -2, -3, -4, -5}; 
      const array<size_t, 4> tailles{2, 3, 1, 4}; 
      auto m = generer(contenu, tailles); 
 
      for (auto const & v: m) { 
         for (auto e: v) 
            cout << setw(3) << e; 
         cout << endl; 
      } 
   } 
   cout << endl; 
   { 
      const array<int, 10> contenu{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
      const vector<size_t> tailles{5,3,2}; 
      auto m = generer(contenu, tailles); 
 
      for (auto const & v: m) { 
         for (auto e: v) 
            cout << setw(3) << e; 
         cout << endl; 
      } 
   } 
}
