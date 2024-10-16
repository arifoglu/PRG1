#include <iostream>
#include <string>
using namespace std;

int main() {
  string s("to be question"), 
         s2("the "), 
         s3("for not to be");
  s.insert(6,s2);
  cout << s <<endl;// "to be the question")
  s.insert(6,s3,1,7);
  cout << s <<endl;// "to be or not the question"
  s.insert(13,"that is cool",8);
  cout << s <<endl;// "to be or not that is the question"
  s.insert(13,"to be ");
  cout << s <<endl;// "to be or not to be that is the question"
  s.insert(18,1,':');
  cout << s <<endl;// "to be or not to be :that is the question"

  return EXIT_SUCCESS;
}