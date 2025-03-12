#include <iostream>

using namespace std;

char op = '+';

float calcul(float a, float b);

int main(){
    float a, b;
        
    cout << "a : ";cin >> a;
    cout << "b : ";cin >> b;

    cout << a << op << b << " = " << calcul(a, b) << endl;

}

float calcul(float a, float b){
    switch(op){
        case '+' : return a + b; break;
        case '-' : return a - b; break;
        case '*' : return a * b; break;
        case '/' : return a / b; break;
        default : return a + b;
    }
}
