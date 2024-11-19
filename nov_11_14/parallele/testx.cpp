#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

int main() {
  array<vector<int>,3> a{};
  for(size_t i = 0; i < a.size();++i){
    cout << "Entrez 3 valeurs : \n";
      for(size_t j = 0; j < 3;++j){
        int num;
        cout << "Entrez un nombre [" << i << "]" << "[" << j <<"] : " ;
        cin >> num;
        a[i].push_back(num);
      }
      cout << endl;
  }

  // 
  for(size_t i = 0; i < a.size();++i){
    for(size_t j = 0; j < a[i].size();++j){
      cout << a[i][j];
    }
    cout << endl;
  }

   return 0;
 }