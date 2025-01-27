#include <iostream>

using namespace std;

class C {
   int i;
public:
   C() : i(0)      { cout << "CD " << flush; }
   C(int i) : i(i) { cout << "C" << i << " " << flush; } 
   ~C()            { cout << "D" << i << " " << flush; }
};
void* f()             { return ::operator new(sizeof(C));}
C*    f(void* p)      { return new(p) C;}
void f(void* p, int i){new(p) C(i);}
void g(C* p)          {p->~C();}  
int main() {
   void *p1 = f(), *p2 = f();
   f(p1);
   f(p2,4);
   g((C*)p2);
   f(p2,1);
   g((C*)p1);
   ::operator delete(p1);
   g((C*)p2);
   ::operator delete(p2);
}