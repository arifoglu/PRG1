#include <iostream>
#include <array>
using namespace std;

enum class  Day { ERROR,   LUNDI,   MARDI,   MERCREDI,   JEUDI,   VENDREDI,   SAMEDI,   DIMANCHE};
const array DAY {"ERROR", "LUNDI", "MARDI", "MERCREDI", "JEUDI", "VENDREDI", "SAMEDI", "DIMANCHE"};

string day_to_string (Day d) {
   if (d >= Day::LUNDI and d <= Day::DIMANCHE)
      return DAY[size_t(d)];

   return DAY[size_t(Day::ERROR)];
}

Day string_to_day(const string& s){
   for(size_t i = 1; i < DAY.size();++i){
      if(DAY[i] == s)
         return Day(i);
   }
   return Day::ERROR;
}

int main() {



return EXIT_SUCCESS;
}
