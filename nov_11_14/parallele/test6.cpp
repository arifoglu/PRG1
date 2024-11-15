#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
  ////Example 1
  //array<array<int,3>,3> a({{5,6,7},{8,9,10},{11,12,13}});
  //for(auto row : a){
  //  for(auto col : row){
  //      cout << col << " ";
  //  }
  //  cout << endl;
  //}
//
  ////Example 2
  //vector<vector<int>> v{{5,6,7},{8,9,10},{11,12,13}};
  //for(const auto & row : v){
  //  for(auto col : row){
  //      cout << col << " ";
  //  }
  //  cout << endl;
  //}
  //
  ////Example 3
  //array<vector<int>,3> a2({{5,6,7},{8,9,10},{11,12,13}});
  //for(const auto & row : a2){
  //  for(auto col : row){
  //      cout << col << " ";
  //  }
  //  cout << endl;
  //}

  //Example 4
  array<vector<int>,3> a3;
  
  for(size_t i_row = 0; i_row < a3.size();++i_row)
  {
    cout << "Pour ligne " << i_row + 1 << " entrez 3 éléments :\n";
    for(size_t j_col = 0 ; j_col < 3 ;++j_col)
    {
        int num;
        cout << "Entrez un nombre ["<< i_row << "]" << "[" << j_col << "] : ";
        cin >> num ;
        a3[i_row].push_back(num);
    }
  }

  //affichage 
  for(size_t i_row = 0; i_row < a3.size() ;++i_row)
  {  
    for(size_t j_col = 0; j_col < a3[i_row].size();++j_col )
        {
            cout << a3[i_row][j_col] << " " ;
        }
    cout << endl;    
  }

  return 0;
 }