#include <iostream>

using namespace std;

class MonEntier{
    private:
        int num;
    public:
        MonEntier();
        MonEntier(int n);
        friend ostream& operator<<(ostream& os, const MonEntier& p);
        friend bool operator==(const MonEntier& p1,const MonEntier& p2);
        MonEntier operator++(int);
        MonEntier& operator++();
        MonEntier operator+(const MonEntier& p2);
        MonEntier& operator+=(const MonEntier& autre);
};
MonEntier::MonEntier(): num(0.0){};
MonEntier::MonEntier(int n): num(n){};

ostream& operator<<(ostream& os, const MonEntier& p){
    os << "n = " << p.num ;
    return os;
}
bool operator==(const MonEntier& p1,const MonEntier& p2){
    return (p1.num == p2.num);
}
MonEntier MonEntier::operator++(int){
    MonEntier temp = *this;
    num++;
    return temp;
}
MonEntier& MonEntier::operator++(){
    num++;
    return *this;
}
MonEntier operator+(const MonEntier& p2){
    return MonEntier(this->num + p2.num);
}
MonEntier& MonEntier::operator+=(const MonEntier& autre){
    num += autre.num;
    return *this;
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