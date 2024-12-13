#include <iostream>
using namespace std;

int factorielle(int n){
    int n = 1;
    for(int i = n - 1; i > 0 ;--i){
        n *= i;
    }
    return n;
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