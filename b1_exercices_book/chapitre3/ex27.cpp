#include <iostream>

using namespace std;

float calcul(float a, float b, char op);

int main(){
    float a, b;
    char op;
    
    cout << "a : ";cin >> a;
    cout << "b : ";cin >> b;
    cout << "option(+, -, *, /) : ";cin >> op;

    cout << a << op << b << " = " << calcul(a, b, op) << endl;

}

float calcul(float a, float b, char op){
    switch(op){
        case '+' : return a + b; break;
        case '-' : return a - b; break;
        case '*' : return a * b; break;
        case '/' : return a / b; break;
        default : return a + b;
    }
}
