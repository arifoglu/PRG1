#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <span>
using namespace std;

size_t indice_min (span<const int> v) {
    size_t imin = 0;
    
    for (size_t i = 1; i < v.size(); ++i)
      if (v[i] < v[imin])
      imin = i;
    
    return imin;
}

int main() {
  vector<int> v{7, 9, 4, 2, 6, 3};

  size_t imin = indice_min(v);
  cout << "v[" << imin << "] = "
  << v[imin] << endl;

}
