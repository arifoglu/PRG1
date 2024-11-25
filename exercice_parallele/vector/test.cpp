#include <iostream>
#include <vector>
#include <array>
#include <span>
using namespace std;

int main() {
   /////////////vector
   vector<int> v{1,2,3,4,5,6,7,8,9};
   
   span<int> s1(&v[0],v.size());
   for(auto e : s1)cout << e ;
   cout << endl;

   span s2(&v[0],v.size());
   for(auto e : s2)cout << e ;
   cout << endl;

   span s3(v.data(),v.size());
   for(auto e : s3)cout << e ;
   cout << endl;

   span s4(v);
   for(auto e : s4)cout << e ;
   cout << endl;
   
   //////////array
   array<unsigned,3> a{6u, 7u, 8u};
   
   span s5(a.data(),a.size());
   for(auto e : s5)cout << e ;
   cout << endl;

   span s6(a);
   for(auto e : s6)cout << e ;
   cout << endl;

   ////////// array C
   double t[5] = {1.,2.,3.,4.,5.};
   
   span s7(t,5);
   for(auto e : s7)cout << e ;
   cout << endl;

   span s8(t);
   for(auto e : s8)cout << e ;
   cout << endl;
   
   //////////////
   short* p = new short[3];
   span s9(p,3);
   for(auto e : s9)cout << e ;
   cout << endl;

   return 0;
 }