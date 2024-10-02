#include <iostream>
#include <cstdlib>

using  namespace std;

int main(){
     /*
    1)!!!check paranthese toujours!!!!
    int i = 0;
    while(i <= 5)
        i++ ;
        cout << i ;
    6
    */
   //////////////
     /*
    2)!!!check paranthese toujours!!!!
    int i = 0,int j = 0;
    while(i <= 5)
        i += j++;
        cout << i << ' ' << j ;
    6 4
    */
   //////////////
     /*
    3)!!!
    int i = 0,int j = 0;
    while(i <= 5)
        i += ++j;
        cout << i << ' ' << j ;
    6 3
    */
   //////////////
     /*
    4)!!!
    int i = 0,int j = 0;
    while(j <= 5)
        i += j++;
        cout << i << ' ' << j ;
    15 6
    */
   //////////////
     /*
    5)!!!
    int i = 0,int j = 0;
    while(j <= 5)
        i += ++j;
        cout << i << ' ' << j ;
    21 6
    */
   //////////////
     /*
    6)!!!
    int i = 0,int j = 0;
    while(i <= 5)
        i += 2;
        j++;
        cout << i << ' ' << j ;
    6 1
    */
   //////////////
    return EXIT_SUCCESS;
}