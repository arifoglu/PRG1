#include <iostream>
#include <vector>
#include <string>
#include <span>
using namespace std;

size_t oter_hors_limite(span<double> s, const array<double,2> & intervale){
   size_t w = 0;
   for(size_t i = 0; i < s.size();++i)
   {
      if(s[i] >= intervale[0] && s[i] <= intervale[1]){
         s[w++] = s[i];
      }
   }
   return w;
}
/*
size_t oter_hors_limite(span<double> s, const array<double,2> & intervale){
   size_t w = 0;
   for(double d : s){
      if(d >= intervale[0] && d <= intervale[1]){
         s[w++] = d;
      }
   }
   return w;
}
*/

int main() {
   array a{1.0, 2.3, 1.4, 5.3, 3.4, 2.4, 4.6}; 
   auto n = oter_hors_limite(a, array{2.3, 5.0}); 
   for (size_t i = 0; i < n; ++i) 
      cout << a[i] << ' '; 
 
   cout << endl; 
   vector v{1.0, 2.3, 1.4, 5.3, 3.4, 2.4, 4.6}; 
   v.resize(oter_hors_limite(v, array{1.4, 3.4})); 
   for (double e : v) 
      cout << e << ' ';

   return 0;
}

