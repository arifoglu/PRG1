#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  for(int i = 1, j = 3 ; i <=5 ;i++,j += i){
    cout << "i = " << i << " j = " << j <<endl;
  }
  return EXIT_SUCCESS;
}