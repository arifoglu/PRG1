#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
  unsigned i; cin >> i;
  switch(string s = to_string(i);s.size()){
    case 1: cout << " chiffre ";break;
    case 2: cout << "Nombre entre 10 et 99";break;
    default: cout << "nombre a 2 chiffres ou plus";break;
  }
  return EXIT_SUCCESS;
}