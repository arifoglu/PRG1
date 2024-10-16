#include <iostream>
#include <string>
using namespace std;

int main() {
  string s("There are two needles in this haystack with needles.");
  string s2("needle");
  size_t needle1 = s.find(s2); 
  cout << needle1 <<endl;

  size_t needle2 = s.find(s2, needle1 + 1);
  cout << needle2 <<endl;

  size_t haystack = s.find("haystack");
  cout << haystack <<endl;

  needle1 = s.find("needles are small",0,6);
  cout << needle1 << endl; // needle

  s.replace(s.find(s2), s2.length(), "preposition");
  cout << s <<endl;
  return EXIT_SUCCESS;
}