#include <iostream>
#include <cstdlib>

using namespace std;

void f(){
    static int compteur ;
    compteur++;
    cout << "appel # " << compteur << endl;
}

int main(){
    for(int i = 0; i < 5;++i){
        f();
    }
    return EXIT_SUCCESS;
}