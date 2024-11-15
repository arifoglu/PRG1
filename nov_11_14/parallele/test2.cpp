#include <iostream>
#include <vector>
#include <array>
#include <span>
using namespace std;

int main() {
   vector<int> v{1,2,3,4,5,6};
   
   // subspan
   span<int> s1(&v[1],2);
   for(auto e : s1)
   cout << e ;
   cout <<endl;

   span s2 = span(v).subspan(1,2);
   for(auto e : s2)
   cout << e ;
   cout <<endl;

  // first
  span s3(&v[0],3);
  for(auto e : s3)
  cout << e ;
  cout <<endl;

  span s4 = span(v).first(3);
  for(auto e : s4)
  cout << e ;
  cout <<endl;

  // last
  span s5(&v[v.size() - 2],2);
  for(auto e : s5)
  cout << e ;
  cout <<endl;

  span s6 = span(v).last(2);
  for(auto e : s6)
  cout << e ;
  cout <<endl;

   return 0;
 }