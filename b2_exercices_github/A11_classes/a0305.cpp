#include <iostream>

using namespace std;

class Trace {
   friend ostream& operator<< (ostream& os, const Trace& t) {
      return os << t.id << t.data;
   }

public:
   Trace()                   : id(nextId++), data('a')  { cout << "C0(" << *this << ") "; }
   Trace(char data)          : id(nextId++), data(data) { cout << "Ci(" << *this << ") "; }
   Trace(const Trace& other) : id(nextId++)             { this->data = other.data;
                                                          cout << "CC("  << other << "->" << *this << ") "; }
   ~Trace()                                             { cout << "D("  << *this << ") "; }
   Trace& operator= (const Trace& other)                { this->data = other.data;
                                                          cout << "=C("  << other << "->" << *this << ") ";
                                                          return *this; }
private:
   static int  nextId;
          int  id;
          char data;
};

int Trace::nextId = 1;

Trace f1 (char i)         { cout << "f1 : "; return Trace(i); }
Trace f2 (Trace t)        { cout << "f2 : "; return t;        }
Trace f3 (const Trace& t) { cout << "f3 : "; return t;        }

int main() {

}
    
