#include "fct.hpp"

int fct (char c, int n)  {        
    int res ;   
    if (c == 'a')      res = n + c ;   
    else if (c == 's') res = n - c ;   
    else               res = n * c ;   
    return res ;
}