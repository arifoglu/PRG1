#include <iostream>
#include "points.hpp"
using namespace std;


int main(){
    Point p(3,2);
    p.affiche();

    p.deplace(5,7);
    p.affiche();

    return EXIT_SUCCESS;
}