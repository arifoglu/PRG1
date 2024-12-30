#include <iostream>
using namespace std;

class MonEntier{
    private:
        int x;
    public:
        MonEntier(int num = 0) : x(num){}  

        friend ostream& operator<<(ostream&,const MonEntier&); 

        friend bool operator==(const MonEntier&,const MonEntier&); 
        friend bool operator!=(const MonEntier&,const MonEntier&);


        MonEntier operator++(int);
        MonEntier& operator++();

        MonEntier& operator+=(const MonEntier&);

        friend MonEntier operator+(const MonEntier& p1,const MonEntier& p2);

};
ostream& operator<<(ostream& os,const MonEntier& p){
    os << "n = " << p.x ;
    return os;
}  
bool operator==(const MonEntier& p1,const MonEntier& p2){
    return (p1.x == p2.x);
}
bool operator!=(const MonEntier& p1,const MonEntier& p2){
    return (p1.x != p2.x);
}
MonEntier MonEntier::operator++(int){
    MonEntier temp = *this;
    x++;
    return temp;
}
MonEntier& MonEntier::operator++(){
    ++x;
    return *this;
}
MonEntier& MonEntier::operator+=(const MonEntier& autre){
    x += autre.x;
    return *this;
}
MonEntier operator+(const MonEntier& p1,const MonEntier& p2){
    return MonEntier(p1.x + p2.x);
}


int main() {
   MonEntier m0, m1(1), m2 = 5;
   const MonEntier m3{7};

   cout << m0 << endl
        << m1 << endl;
   
   cout << boolalpha;
   cout << (m0 == m1) << endl;
   cout << (m0 != m1) << endl;   
   cout << noboolalpha;
   
   cout << m1++ << endl;
   cout << m1 << endl;
   cout << ++m1 << endl;
   
   cout << m1 + m2 << endl;
   m1 += m2;
   cout << m1 << endl;
   cout << m3 + m2 << endl;
}