#include <iostream>
#include <cstdlib>

using namespace std;

int facto(int n){
    if(n <= 1)
    return 1;

    return n * facto(n - 1);
}

int main(){
    cout << facto(5)<<endl;
    
    return EXIT_SUCCESS;
}