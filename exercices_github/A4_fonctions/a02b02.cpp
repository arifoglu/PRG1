#include <iostream>
#include <cstdlib>

using namespace std;

void permutatione(double&,double&,double&);

int main() {
   double x,y,z;
   cout << "Saisissez trois valeurs\n";
   cin >> x >> y >> z;
   permutatione(x,y,z);

   return EXIT_SUCCESS;
}

void permutatione(double& a,double& b,double& c){
    for(int i = 1;i <= 3;i++){
         double temp;
         cout << a << b << c <<endl;
         temp = a;
         a = b;
         b = c;
         c = temp;
    }
};
