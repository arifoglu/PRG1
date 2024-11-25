#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    // string(size_t n, char c) => create n fois c
    string s1(6, 'a'); 
    cout << s1 << endl;// aaaaaa

    // 
    const char* p = "Hello World!";
    string s2(p,5);
    cout << s2 <<endl;

    string s3("Welcome",3);
    cout << s3 << endl; // Wel
    
    string s4(s2.data(),2);//He
    cout << s4 << endl;

    // create substring
    string salutation("salut les gars");    
    cout << salutation << endl;//salut les gars
    
    string sc(salutation,0,5);
    cout << sc << endl;//salut

    string sc2(salutation,6,3);
    cout << sc2 << endl;//les

    string sc3(salutation,10);
    cout << sc3 <<endl;// gars

    string sc4(salutation,1);
    cout << sc4 <<endl;// alut les gars

    ////////////// Attention

    string hello("Hello, World!");
    cout << hello<<endl;

    // 2 option different
    //creating 
    string st("Hello, World!", 5); // buffer : contient "Hello, "
    cout << st <<endl;
    //substring
    string st2(hello, 7); // 
    cout << st2 << endl; // substr : contient "World!"
   
    string st3(string("Hello, World!"), 7);
    cout << st3 << endl; // World! 

    string s9("sorunlar"s,3,1);
    cout << s9 <<endl;
    return EXIT_SUCCESS;
}