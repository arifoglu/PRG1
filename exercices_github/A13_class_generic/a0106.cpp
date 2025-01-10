#include <iostream>
#include <array>

using namespace std;

//---------------------------------------------------------
template <typename T, size_t n = 100>
class Stack {

public:
   Stack() : index{}, data{} {}

   // méthodes définies plus bas
   void push(const T& v);
   void pop();
   const T& top() const;
   void display() const;

   // méthodes triviales définies en ligne
   bool full() const { return index == n; }
   bool empty() const { return index == 0; }
   size_t size() const { return index; }
   size_t capacity() const { return n; }

private:
   size_t index;
   std::array<T, n> data;
};

int main() {
   
   Stack<int, 10> s;
   int i = 1;

   s.display();
   cout << endl;

   while (not s.full()) {
      s.push(i*=2);
   }

   cout << "top  : " << s.top() << endl;
   cout << "size : " << s.size() << endl;
   cout << endl;

   s.display();
   cout << endl;

   while (not s.empty()) {
      s.pop();
   }

   s.display();
   cout << endl;
}

//---------------------------------------------------------
template <typename T, size_t n>
void Stack<T, n>::push(const T& v) {
   data.at(index++) = v;
}

//---------------------------------------------------------
template <typename T, size_t n>
void Stack<T, n>::pop() {
   data.at(--index);
   // Note : accès à data uniquement pour lever une exception
   // en cas de pop() sur une stack vide
}

//---------------------------------------------------------
template <typename T, size_t n>
const T& Stack<T, n>::top() const {
   return data.at(index - 1);
}

//---------------------------------------------------------
template <typename T, size_t n>
void Stack<T, n>::display() const {
   cout << "size : " << index << endl;
   cout << "data : ";

   cout << "[";
   for (size_t i = 0; i < index; ++i) {
      if(i) cout << ", ";
      cout << data[i];
   }
   cout << "]" << endl;
}