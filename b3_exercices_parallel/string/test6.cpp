#include <iostream>
using namespace std;

int main() {
  string ch ("abcde");
  ch[1] = ' ';
  //for (size_t i = 0; i <= ch.size(); ++i)
  //   cout << int(ch[i]) << " ";
  //    cout << endl; // Imprime 97 32 99 100 101 0
  
  for (size_t i = 0; i <= ch.size(); ++i)
  cout << ch.at(i) << endl; // Imprime abcde (un symbole par ligne)
   /* Lève l'exception "out_of_range" lorsque i vaut ch.size() */
 
 }