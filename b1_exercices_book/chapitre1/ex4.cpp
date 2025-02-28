/*
Soient les déclarations :

int n = 5, p = 9 ;
int q ;
float x;

Quels sont le type et la valeur de chacune des expressions suivantes :
q = n < p ;                 => q = 1
q = n == p ;                => q = 0
q = p % n + p > n ;         => q = 5
x = p / n ;                 => x = 1 float
x = (float) p / n ;         => x = 1.8 float
x = (p + 0.5) / n ;         => x = 1.9 double
x = (int) (p + 0.5) / n ;   => x = 1 int
q = n * (p > n ? n : p) ;   => q = 25
q = n * (p < n ? n : p) ;   => q = 45
*/