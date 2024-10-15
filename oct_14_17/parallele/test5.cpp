#include <iostream> 
using namespace std;

int main() {
  string ch;
  cout << ch.size()<<endl; // 0
  cout << ch.empty()<<endl; //1 => true
  ch = "Bonjour";

  cout << ch.size()<<endl; // 7
  cout << ch.empty()<<endl; //0 => false

  string ch1 = "bonjour";
  string ch2 = "madame";
  string ch3 = ch1 + ch2;
  cout << ch3 <<endl;// bonjourmadame;
  string ch4 = ch1 + "monsieur";
  cout << ch4 <<endl;// bonjourmonsieur;
  string ch5 = ch1 + (" et " + ch2);
  cout << ch5 << endl;
  string ch6 = 'r' + string("e")+ ch1;
  cout << ch6 << endl;

  return 0;
}