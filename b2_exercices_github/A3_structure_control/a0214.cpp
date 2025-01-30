#include <iostream>
#include <cstdlib>

using  namespace std;

int main(){
    /*1)Réécrire avec une boucle while
    for (int i = 0; i < n; ++i) {
    cout << i << endl;
    }
    => version while
    {// bloc nécessaire scope
      int i = 0;
      while(i < n){
      cout << i <endl;
      i++;
      }
    }
    */
    /*2)Réécrire avec une boucle do while
    for (int i = 0; i < n; ++i) {
    cout << i << endl;
    }
    => version do while
    {
      int i = 0;
      if( i < n)
      {
        do{
          cout << i <<endl;
          ++i;
        }while(i < n);
    }
    
    }
    */
     /*3)Réécrire avec une boucle for
    int i = 0; 
    while (i-- > n) {
       cout << i << endl;
    }
    => version for
    int i = 0;
    for(; i-- > n;){
      cout << i <<endl;
    }
    */
    /*4)Réécrire avec une boucle do while
    int i = 0; 
    while (i-- > n) {
       cout << i << endl;
    }
    => version do while
  {
  int i = 0;
  if(i-- > n){
      do{
          cout << i <<endl;
          i--;
        }while(i-- > n);
      }
    
  }
    */
    /*5)Réécrire avec une boucle for
    int i = 0; 
    do {
      cout << i << endl;
      ++i; 
    } while (i < n);   
    => version for
    int i = 0;
    cout  << i <<endl;
    for(++i; i < n ;++i){
      cout << i <<endl;
    }

    */
       /*6)Réécrire avec une boucle while
    int i = 0; 
    do {
      cout << i << endl;
      ++i; 
    } while (i < n);      
    => version while
    int i = 0;
    cout << i <<endl;
    while(++i,i < n){
    cout << i <<endl;
    }

    */
    return EXIT_SUCCESS;
}