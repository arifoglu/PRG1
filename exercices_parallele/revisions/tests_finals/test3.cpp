#include <iostream> 
using namespace std; 
 
// Votre code vient ici 
double apply_op(double , double, char ); 

int main() { 
   cout << apply_op(2., 3., '*') << endl 
        << apply_op(4., 5., '+') << endl 
        << apply_op(3., 2., '-') << endl 
        << apply_op(4., 3., '/') << endl 
        << apply_op(4., 2., '&') << endl 
        << apply_op(apply_op(3., 2., '*'), 2., '+') << endl;

}
double apply_op(double a, double b, char c){
    switch(c){
        case '*' :return a * b; break;   
        case '+' :return a + b; break;  
        case '-' :return a - b; break;  
        case '/' :return a / b; break;
        default : return 0/0.0; break;
    }
} 
