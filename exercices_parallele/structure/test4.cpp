#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  for (char ligne = 'a'; ligne <= 'd'; ++ligne) {
      for (int col = 1; col <= 5; ++col) {
        cout << ligne << col << ' ';
      }
    cout << endl;
  }
  for (int y = 0; y < 5; ++y) {
    for (int x = 0; x <= y; ++x)
    cout << '*';
    cout << endl;
  }

  char c = 'A';
  for (int y = 0; y < 4; ++y) {
    for (int x = 0; x < 16; ++x, ++c)
      cout << c << ' ';
      cout << endl;
  }
  return EXIT_SUCCESS;
}