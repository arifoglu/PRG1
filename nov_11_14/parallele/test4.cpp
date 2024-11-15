#include <iostream>
#include <vector>
#include <array>
#include <span>
#include <string>
using namespace std;

int main() {
  //////////Vector
  vector<int> v(3,5);
  for(auto e : v)
    cout << e ;
    cout << endl;

  //
  vector<vector<int>> matrix {
    {1,2,3},
    {4,5,6},
    {7,8,9},
  };

  for(auto row : matrix){
      for(auto val : row)
      {
        cout << val << " "; 
      }
      cout << endl;
  }
  //
  vector<vector<int>> matrix2(3,vector<int>(3,5));
  for(auto row : matrix2){
      for(auto val : row)
      {
        cout << val << " "; 
      }
      cout << endl;
  }

  ///
  vector<vector<double>> m2(4, vector<double>(5, 0.));
   for(auto row : m2){
     for(auto val : row)
     {
       cout << val << " "; 
     }
     cout << endl;
  }
   
   //
  vector<array<double, 3>> m3(4, array<double, 3>{2,3,4});
   for(auto row : m3){
     for(auto val : row)
     {
       cout << val << " "; 
     }
     cout << endl;
  }

  //
  array<vector<double>, 6> m4;
  m4.fill(vector<double>(3,0.));
     for(auto row : m4){
     for(auto val : row)
     {
       cout << val << " "; 
     }
     cout << endl;
  }
  cout << "*****************"<<endl;
  array<array<double,3>, 4> m5{};
  m5[2][1] = 4;
  for(auto row : m5){
     for(auto val : row)
     {
       cout << val << " "; 
     }
     cout << endl;
  }
   return 0;
 }