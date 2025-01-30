#include <iostream>
using namespace std;

template <typename T, typename U>
U convert(T a){
    return a;
}

int main() {
    int x = 5;
    double y = 3.14;
    
    cout << "x (int to double) : " << convert<int,double>(x) <<endl;    
    cout << "x (double to int) : " << convert<double,int>(y) <<endl;    

    return 0;
}

