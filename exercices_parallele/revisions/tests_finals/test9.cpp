#include <iostream> 
#include <string> 
 
// votre code vient ici 
struct str_info{
   size_t caracter;
   size_t voyelle;
   size_t consonne;
};
str_info types_de_lettres (std::string_view s){
   str_info result{0,0,0};

   for(char c : s){
      if(isalpha(c))
      {
         result.caracter++;
         
         char lower_c = tolower(c);
         if(lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u' || lower_c == 'y')
         {
            result.voyelle++;
         }
         else
         {
            result.consonne++;
         }
      }
   }
   return result;
}


int main() { 
   std::string s = "Hello, World !"; 
   auto [n, nv, nc] = types_de_lettres(s); 
 
   std::cout << "La chaine \"" << s << "\" contient " 
        << n << " caractères, dont " << nv << " voyelles et " 
        << nc << " consonnes."; 
}