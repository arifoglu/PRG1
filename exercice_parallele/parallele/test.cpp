#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int a = 5 ; // 101
    int b = 3;  //  11
    int result = a & b;
    cout << "result : "<< result <<endl;
    
    int c = 4 ; // 100
    int d = 3;  //  11
    int result2 = c & d;
    cout << "result : "<< result2 <<endl;

    int e = 34 ; // 100010
    int f = 26;  //  11010
    int result3 = e & f;
    cout << "result : "<< result3 <<endl;

    int r = 7 ; //  111
    int t = 3;  //  011
    int result4 = r & t;
    cout << "result : "<< result4 <<endl;
    
    return EXIT_SUCCESS;
}