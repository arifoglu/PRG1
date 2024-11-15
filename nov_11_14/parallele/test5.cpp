#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
  array<array<double,3> ,4> m{};
  for(size_t i_ligne = 0; i_ligne < m.size();++i_ligne)
  {
      for(size_t i_col = 0;i_col < m[i_ligne].size();++i_col )
      {
          cout << m[i_ligne][i_col] << " " ;
      }
      cout << endl;
  }

  

  return 0;
 }