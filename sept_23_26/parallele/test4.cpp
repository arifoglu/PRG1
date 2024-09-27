#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
  string s;
  cin >> s;
  if(char c = s[0] ; c == 'h' or c == 'H'){
    cout << '"' << s << '"'<<" commence par la lettre H ";
  }else{
    cout << '"'<< s << '"'<<" commence par la lettre "<< c << " et pas par H";
  }
  return EXIT_SUCCESS;
}