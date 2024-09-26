// abdulkadir arifoglu - 26.09.2024 - Laboratoire 5
// programme de transformation d'unite affichage plus soigne
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){  
    const int minute_per_secondes = 60;   // 60 secondes = 1 minute
    const int heure_per_minutes = 60;     // 60 minutes  = 1 heure
    const int jour_per_heures = 24 ;      // 24 heure    = 1 jours
    const int semaine_per_jours =  7;     // 7 jours     = 1 semaine

    int input_secondes,secondes,minutes,heures,jours,semaines;

    cout << "Entrez secondes : ";
    cin >> input_secondes;

    // une semaine = 7 jours * 24 heures * 60 minutes * 60 secondes
    semaines = input_secondes / (minute_per_secondes * heure_per_minutes * jour_per_heures * semaine_per_jours);

    // atteindre les numeros des jours utilise modulus %
    jours = (input_secondes % (minute_per_secondes * heure_per_minutes * jour_per_heures * semaine_per_jours)) / (minute_per_secondes * heure_per_minutes * jour_per_heures);
    heures = (input_secondes % (minute_per_secondes * heure_per_minutes * jour_per_heures)) / (minute_per_secondes * heure_per_minutes) ;
    minutes = (input_secondes % (minute_per_secondes * heure_per_minutes)) / minute_per_secondes;
    secondes = input_secondes % minute_per_secondes;
    
    // affichage si la duree est inferieure à une minute
    if(input_secondes < 60)
    {
        cout << "Vous avez introduit " << secondes << " secondes "<<endl;
    }
    else
    {
      if(semaines > 0 )
      {
         if(semaines == 1)
         {
          cout << semaines << " semaines ";
         }
         else 
         {
          cout << semaines << " semaines ";
         }
      }
      if(jours > 0)
      {
         if(jours == 1)
         {
          cout << jours << " jour ";
         }
         else 
         {
          cout << jours << " jours ";
         }
      }
      if(heures > 0)
      {
         if(heures == 1)
         {
          cout << heures << " heure ";
         }
         else 
         {
          cout << heures << " heures ";
         }
      }
      if(minutes > 0)
      {
         if(minutes == 1)
         {
          cout << minutes << " minute ";
         }
         else 
         {
          cout << minutes << " minutes ";
         }
      }
      if(secondes > 0)
      {
         if(secondes == 1)
         {
          cout << secondes << " seconde ";
         }
         else 
         {
          cout << secondes << " secondes ";
         }
      }
    }
    cout <<endl;
    
    return EXIT_SUCCESS;
}