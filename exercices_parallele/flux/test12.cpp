#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main() {
    //////////// cin , getline
    //string str;
    //cin >> str;
    //getline(cin,str);
    //getline(cin,str,'-');
    //cout << str << endl;


    ///////////// stringstream string 
    //stringstream in(" \n  \t Hello World !  ");
    //int i{};
    //string s; // Hello
    //while(in >> s){
    //    cout << ++i << " : " << s << endl;
    //}


    ///////////// stringstream char
    //stringstream in(" \n  \t Hello World !  ");
    //int i{};
    //char s; // H e l l o
    //while(in >> s){
    //cout << ++i << " : " << s << endl;
   // }


    //stringstream in("James Bond/John Doe/Jack Smmith");
    //int i{};
    //while(not in.eof()){
    //    string name;
    //    getline(in,name,'/');
    //    cout << ++i << " : " << name << endl;
    //}

    //stringstream in("Une ligne avec des blancs\nUne autre ligne");
    //char c;
    //while(in.get(c)){
    //    cout << c;
    //}

    //stringstream in("Une ligne avec des blancs\nUne autre ligne");
    //char c;
    //while(in >> c){
    //    cout << c;
    //}

    //stringstream in("Une ligne avec des blancs\nUne autre ligne");
    //while(true){
    //    char c = in.get();
    //    if(in.eof())
    //    break;
    //    cout << c ;
    //}

    ////////////// unget()
    //stringstream in("abcdefg");
    //char c;
    //in.get(c);
    //cout << c <<endl;
    //in.unget(); 
    //while(in.get(c))
    //cout << c ;

    //stringstream in("abcdefg");
    //char c;
    //in.get(c);
    //cout << c <<endl; 
    //while(in.get(c))
    //cout << c ;

    //////////////////
    //stringstream in("abcdefg");
    //char c;
    //in.get(c);
    //cout << c << endl;
    //in.putback('Z');
    //while(in.get(c))
    //cout << c ;

    int      a, b;
   double   x, y;
   char     c;
   
   cout << "entrer des valeurs : ";   
   while(cin.get() != '\n');
   cout << endl;
   cin  >> a;
   cin  >> b;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   cin  >> x;
   cin  >> y;
   cout << "voulez-vous sauver [o/n] : ";
   cin  >> c;
   cout << "sauver : " << c << endl;
   cin  >> a;
   cin  >> b;
   cin  >> x;

   cout << "presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return EXIT_SUCCESS;
}