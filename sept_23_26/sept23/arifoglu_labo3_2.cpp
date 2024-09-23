//abdulkadir arifoglu - 23.09.2024 - Laboratoire 3
// calculer la duree d'un trajet 
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    const int min_per_heure = 60;    // 1 heure = 60 min;
    const int min_per_24heure = 1440;// 24 heure = 1440 min;

    // déterminer les variables et prendre les des utilisateurs
    int heure_arrive, minute_arrive, heure_depart, minute_depart;

    cout << "Entrez votre heure(0-24) et minute (0-60) d'arrivee (ex: 01 13) : ";
    cin >> heure_arrive >> minute_arrive;
    cout << "Entrez votre heure(0-24) et minute(0-60) de depart (ex:23 59) : ";
    cin >> heure_depart >> minute_depart;
    
    // afficher des heures total sur l'ecran
    cout << "Vous êtes arrivé à " << heure_arrive << "h" << minute_arrive<<endl;
    cout << "Vous êtes sorties à "<< heure_depart << "h" << minute_depart<<endl;

    // calcul total minute en minute 
    int dure_trajet_arrive = (heure_arrive * min_per_heure) + minute_arrive;
    int dure_trajet_sortie = (heure_depart * min_per_heure) + minute_depart;
    
    // pour eviter de resultat negatif ,il faut ajouter 1440 min à notre dure de trajet 
    int dure_trajet = ((dure_trajet_sortie - dure_trajet_arrive) + min_per_24heure) % min_per_24heure ;
    cout << "Total minute : "<< dure_trajet  <<" min"<<endl;

    //convertir heures 
    int heure_trajet  = dure_trajet / min_per_heure;
    dure_trajet %= min_per_heure ;

    cout << "Votre trajet : "<< heure_trajet << "h" << dure_trajet <<endl;

    return EXIT_SUCCESS;
}