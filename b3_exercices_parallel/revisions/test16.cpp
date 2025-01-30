#include <iostream> 
#include <string> 
 using namespace std;

// votre code vient ici 
string search_and_replace(string & str,string from,string to);

int main() { 
   std::string lorem_ispum = "Lorem ipsum dolor sit amet, consectetur " 
           "adipiscing elit. Sed non risus. Suspendisse lectus tortor, " 
           "dignissim sit amet, adipiscing nec, ultricies sed, dolor. \n\n"; 
   search_and_replace(lorem_ispum, "or", "our"); std::cout << lorem_ispum; 
   search_and_replace(lorem_ispum, "s", "zs");   std::cout << lorem_ispum; 
} 
string search_and_replace(string & str,string from,string to){
   size_t position_from = str.find(from);
   size_t longeur_from = from.length();

   if(position_from == string::npos){
      cout << from << " n'a pas pu trouvé ";
   }else{
      while(position_from != string::npos){
         str.replace(position_from,longeur_from,to);
         position_from = str.find(position_from+to.size());
      }
   }
   return str;
}
