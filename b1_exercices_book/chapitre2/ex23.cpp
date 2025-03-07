#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for(int i = 0;i <=10;++i){
        if(i == 0)cout << setw(3) << "";
        if(i != 0)cout << setw(3) << i;
        
        for(int j = 0 ; j <=10;++j){
            if(j == 0)cout << setw(3) << "I";
            if(j !=0 )cout << setw(3) << j * i;        
        }
        cout << "\n";
    }

    return 0;
}