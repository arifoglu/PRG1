#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    string ch1;

    string ch2 = "bonjour";
    cout << ch2 << endl;

    string ch2b = {"bonjour"};
    cout << ch2b << endl;

    string ch2c{"bonjour"};
    cout << ch2c << endl;

    string ch2d("bonjour");
    cout << ch2d << endl;

    string ch4{'b','o','n','j','o','u','r'};
    cout << ch4 << endl;

    string ch4b= {'b','o','n','j','o','u','r'};
    cout << ch4b << endl;

    string ch5{32,'x'};
    cout << ch5 <<endl;

    string ch6 = ch2;
    string ch6b(ch2);
    string ch6c{ch2};
    
    return EXIT_SUCCESS;
}