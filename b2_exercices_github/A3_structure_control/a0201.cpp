#include <iostream>
#include <cstdlib>

using  namespace std;

int main(){
     /*
    1)
    int i = 0;
    while(i - 10){
        i += 2;
        cout << i << " " ;
    }
    2 4 6 8 10
    */
   //////////////
        /*
    2)!!!non parantheses while
    int i = 0;
    while(i - 10)
        i += 2;
        cout << i << " " ;
    10
    */
   ////////////
        /*
    3)
    int i = 0;
    while(i < 11){
        i += 2;
        cout << i << " " ;
    }
    2 4 6 8 10 12
    */
   ////////////
    /*
    4)
    int i = 11;
    while(i--){
        cout << i-- << " ";
    }
    10 8 6 4 2 0 -2 -4 ... infini
    */
   ////////////
    /*
    5)
    int i = 12;
    while(i--){
        cout << --i << " ";
    }
    10 8 6 4 2 0
    */
   ////////////
    /*
    6)
    int i = 0;
    while(i++ < 10){
        cout << i-- << " ";
    }
    1 1 1 ... infini
    */
      ////////////
    /*
    7)
    int i = 1;
    while(i <= 5 ){
        cout << 2 * i++ << " ";
    }
    2 4 6 8 10
    */
      ////////////
    /*
    8)
    int i = 1;
    while(i != 9){
        cout << (i = i + 2) << " ";
    }
    3 5 7 9
    */


    return EXIT_SUCCESS;
}