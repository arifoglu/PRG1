#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try{
        string str("Hello,");
        //str.insert(6," World!");
        str.insert(7," World!");
        cout << str << endl;
    }
    catch(const exception&e){
        cout << " out of range" << endl;
    }
}
//catch(const exception) => hata turunu bilmedigin zaman
//catch(...)             => genel hata yakalamak icin

//catch(const exception& e)=>catch blogunda & kullanimi gereksiz kopyalamayi onler