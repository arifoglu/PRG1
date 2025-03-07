#include <iostream>
using namespace std ;
int main(){ 
    /*
    int i, n, som ;   som = 0 ;   
    for (i=0 ; i<4 ; i++){ 
        cout << "donnez un entier " ;    
        cin >> n ;      
        som += n ;     
    }
    cout << "Somme : " << som ;
    */

    /*
    // while
    int i = 0,n,som = 0;
    while(i < 4){
        cout << "donnez un entier " ;    
        cin >> n ;      
        som += n ; 
        i++;
    }
    cout << "Somme : " << som ;
    */

    
    // do while
   int i = 0,n,som = 0;
    do{
        cout << "donnez un entier " ;    
        cin >> n ;      
        som += n ; 
        i++;
    }while(i < 4);
    cout << "Somme : " << som ;
}