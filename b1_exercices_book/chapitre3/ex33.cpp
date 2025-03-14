#include <iostream>   
#include "fct.hpp"

using namespace std ;

int main(){  
    int n = 150, p ;   
    char c = 's' ;   
    p = fct ( c , n) ;   
    cout << "fct (\'" << c << "\', " << n << ") vaut : " << p ;
}
