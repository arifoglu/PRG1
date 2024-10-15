#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    cout << "Hello World \n" 
            "Hi " 
            "Hey "     
            "Hey hey " <<endl;
    cout << R"( How  are you ? )" << endl;        
    cout << R"abc( How  are you ? )abc" << endl;  
    
    // Initialisations 
    string s1 = "Hello";
    string s2("Hallo");
    string s3{"Salut"};
    string s4 = s1;
    string s5(s2);
    string s6{s3};      
    cout << s1 << s2 << s3 << s4 << s5 << s6 << endl;

    return EXIT_SUCCESS;
}