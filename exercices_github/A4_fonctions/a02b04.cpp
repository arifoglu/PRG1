#include <iostream>
#include <cstdlib>

using namespace std;

bool operation(double operandeGauche,double operandeDroite,char operateur,double & resultat);
void test(double operandeGauche,double operandeDroite,char operateur);

int main(){
    double operandeGauche,operandeDroite;
    cout << "Donnez 2 nombre reels : ";
    cin >> operandeGauche >> operandeDroite ;
    test(operandeGauche,operandeDroite,'+');
    test(operandeGauche,operandeDroite,'-');
    test(operandeGauche,operandeDroite,'*');
    test(operandeGauche,operandeDroite,'/');
}

bool operation(double operandeGauche,double operandeDroite,char operateur,double & resultat){
    switch (operateur){
        case '+' : resultat = operandeGauche + operandeDroite ;break;
        case '-' : resultat = operandeGauche - operandeDroite ;break;
        case '*' : resultat = operandeGauche * operandeDroite ;break;
        case '/' : resultat = operandeGauche / operandeDroite ;break;
        default : return false;
    }
    return true;
}

void test(double operandeGauche,double operandeDroite,char operateur){
    double resultat;
    if(operation(operandeGauche,operandeDroite,operateur,resultat)){
        cout << operandeGauche << " " << operateur << " " << operandeDroite << " = " << resultat <<endl;
    }else{
        cout << "L'operation "<< "'" << operateur << "'" << "est illicite "<<endl;
    }
}
