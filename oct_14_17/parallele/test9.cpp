#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1 = "n example";
  string s2 = "sample phrase";
  string s  = "this is a test string.";

  s.replace(9,5,s1);
  cout << s << endl; // "this is an example string."
  
  s.replace(19,6,s2,7,6);
  cout << s << endl; // "this is an example phrase.""

  s.replace(8,10,"just a");
  cout << s << endl; // "this is just a phrase.""

  s.replace(8,6,"a shorty",7);
  cout << s << endl; // "this is a short phrase.""

  s.replace(22,1,3,'!');
  cout << s << endl; // "this is a short phrase!!!""

  return EXIT_SUCCESS;
}