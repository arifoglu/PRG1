#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = string("Hello World!");
  string vowels = string("aeiouyAEIOUY"); 

  cout << s.find_first_of(vowels)<<endl; // 1
  cout << s.find_first_of(vowels,5)<<endl;//7
  cout << s.find_first_of("Good Bye!")<<endl;//1
  cout << s.find_first_of("Good Bye!",0,4)<<endl;//4
  cout << s.find_first_of('X')<<endl;//
  
  string str("recherche de caracteres non-alphabetiques ...");
  size_t found = str.find_first_not_of("abcdefghijklmnopqrstuvwxyz ");
  cout << "Le premier caractere non-alphabetique est ' "<< found <<endl;// 27
  cout << "Le premier caractere non-alphabetique est ' "<< str.at(found) <<endl;// -

  return EXIT_SUCCESS;
}