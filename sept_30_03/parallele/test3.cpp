#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
int n = 1729;
int sum = 0;
while(n > 0){
  int digit = n % 10;
  sum += digit;
  n /= 10;
}
cout << sum <<endl;
    return EXIT_SUCCESS;
}