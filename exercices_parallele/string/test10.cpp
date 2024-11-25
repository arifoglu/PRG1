#include <iostream>
#include <string>
using namespace std;

int main() {
  string s("This is an example sentence.");
  s.erase(9,9);
  cout << s <<endl;// "This is an sentence."
  s.erase(13);
  cout << s <<endl;// "This is an sen"
  s.clear();
  cout << s <<endl;// "This is an sen"


  return EXIT_SUCCESS;
}