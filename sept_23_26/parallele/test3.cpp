#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int i, j, k;

    i = (i = 3) and (k = 2) or (k = i - 3) ? (j = k + 5) : (j = k - 1);

    cout << "i"<<i<<"j"<<j <<"k"<<k<<endl;
    
    return EXIT_SUCCESS;
}