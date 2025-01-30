#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    /*
    - dogru kullanim => alt siniftan ust sinifa dogru
    1.out_of range 2.exception 
    */
    {
    try{
        string str("Hello,");
        str.insert(20," World!");
    }
    catch(const out_of_range& e){
        cout << "out of range" <<endl;
    }
    catch(const exception& e){
        cout << "exception " <<endl;
    }
    }
    //////////////////////////////
    /*
    - yanlis kullanim =>2.out_of range  1.exception
    - burda once genel exception buldu ve ozel durumu bulmaz artik.
    - !!! alt siniftan ust sinifa dogru kullanmak lazim!!! 
    */

    {
    try{
        string str("Hello,");
        str.insert(20," World!");
    }
     catch(const exception& e){
        cout << "exception " <<endl;
    }
    catch(const out_of_range& e){
        cout << "out of range" <<endl;
    }
    }
}
