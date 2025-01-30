#include <iostream>
#include <cstdlib>

using namespace std;

// version 1
int facto1(int n){
    int result = 1;
    for(int i = n ; i > 0;--i){
        result *= i;
    }
    return result;
}
// version 2
int facto2(int n){
    int result = 1;
    for(int i = 1; i <= n;++i){
        result *= i;
    }
    return result;
}

int main(){
    cout << facto1(4)<<endl;
    cout << facto2(4)<<endl;
    
    return EXIT_SUCCESS;
}