#include <iostream>
#include <vector>
#include <string>
using namespace std;

double apply_op(double a, double b, char c ){
   switch(c){
      case '*' : return a * b;
      case '+' : return a + b;
      case '-' : return a - b;
      case '/' : return a / b;
      default  : return 0/0.;
   }
}

int main() { 
cout << apply_op(2., 3., '*') << endl 
        << apply_op(4., 5., '+') << endl 
        << apply_op(3., 2., '-') << endl 
        << apply_op(4., 3., '/') << endl 
        << apply_op(4., 2., '&') << endl 
        << apply_op(apply_op(3., 2., '*'), 2., '+') << endl; 

return 0;
}

