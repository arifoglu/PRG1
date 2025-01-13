#include <iostream>
#include <vector>

using namespace std;

int main() {
   vector   v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   vector intervalle{3, 6};
   cout << count_if(v.begin(),v.end(),[&](int x){return x > intervalle[0] && x < intervalle[1];})<<endl;
   /*
   int min = 3;
   int max = 6;
   cout << count_if(v.begin(),v.end(),[&min,&max](int e){ return e >= min && e
   <= max})
   */
   return 0;
}