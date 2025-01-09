#include <iostream>
using namespace std;

int factorielle(int n){
    int f = 1;
    for(int i = 0; i <= n ;++i){
        f *= i;
    }
    return f;
}
//version recursive
int factorielle2(int n){
    if(n == 0){return 1;}
    return n * factorielle2(n-1);
}

int plus_petit_n_pour_factorielle_de_n_plus_grande_que(int n){
    int i = 0;
    while(factorielle(i) <= n)
    ++i;
    return i;   
}

int main() { 
   const int m = 100'000'000; 
    
   int n = plus_petit_n_pour_factorielle_de_n_plus_grande_que(m); 
    
   cout << n - 1 << "! = " << factorielle(n - 1) << " <= " << m  
        << " < " << factorielle(n) << " = " << n << "!"; 
    
   cout << factorielle(5);
} 