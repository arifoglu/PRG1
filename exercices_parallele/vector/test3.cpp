#include <iostream>
#include <vector>
#include <array>
#include <span>
#include <string>
using namespace std;

int main() {
  //////////Array
  //m1 = {0,0,0,0}
  array<int ,4> m1{}; 
  for(auto e : m1)
    cout << e; 
    cout << endl;
  
  
  ///  
  /*
  m2 = { 
        {0,0,0}, 
        {0,0,0},
        {0,0,0},
        {0,0,0}
        }
  */
  array<array<int,3>,  4> m2{}; 
  for(auto row : m2){
      for(auto val : row)
      {
        cout << val << " "; 
      }
      cout << endl;
  }

   return 0;
 }