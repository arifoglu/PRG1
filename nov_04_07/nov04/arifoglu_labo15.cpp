/*  abdulkadir arifoglu Laboratoire 15
- Le but est lecture et écriture de fichiers
- Écrire un programme qui permet d’exporter le cheminement du mythique marathon de la HEIG-VD, donné sous la forme d’un fichier contenant la suite de ses coordonnées CH1903 (exprimées en centimètres), vers un fichier au format KML.
- Avant d’écraser un fichier déjà existant, on en demandera confirmation à l’utilisateur en précisant la taille du fichier; s’il ne veut pas l’écraser, lui demander de saisir un autre nom et procéder à une nouvelle vérification.
*/
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

void transforme_CH1903_WGS84(double & x, double & y);
void sauvegarde(const string & nom_fichier_sortie, double lambda, double phi);

int main() {
    string nom_fichier_source;
    cout << "Entrez le nom du fichier de source : ";
    cin >> nom_fichier_source;
    
    string nom_fichier_sortie;
    
    while(true){
        cout << "Entrez le nom du fichier de sortie : ";
        cin >> nom_fichier_sortie;

        //pour verification du fichier
        ifstream fichier_verification(nom_fichier_sortie);

        if(fichier_verification){

            // aller au bout du fichier 
            fichier_verification.seekg(0,ios::end);
            // prendre la taille
            size_t taille = fichier_verification.tellg();
            fichier_verification.close();

            // 
            cout << "Le fichier existe .Taille : " << taille << " bits." << endl;
            cout << "Voulez-vous écraser ce fichier ? (o / n) : ";
            char reponse;
            cin >> reponse;
            if(reponse == 'o')
            {
                break;
            }
            else if(reponse == 'n' )
            {
                continue;
            }
            else
            {
                cout << "Réponse invalide.Entrez 'o' ou 'n'. " << endl;
                continue;
            }
        }
        else 
        {
            cout << "Le fichier n'existe pas.Voulez-vous créérun nouveau ? (o/n) : ";
            char reponse;
            cin >> reponse;
            if(reponse == 'o'){
                break;
            }else{
                continue; 
            }
         }
    }

    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    
    //Utilisation ifstream pour lecture à partir d'un fichier ,
    ifstream fichier_source(nom_fichier_source);

    // verification si le fichier existe 
    if(!fichier_source){
        cerr << "Erreur!!!";
        return EXIT_FAILURE;
    }

    //lire à partir du debut
    fichier_source.seekg(0);
    string line;
    while(getline(fichier_source,line)){
        //cout << line << endl;
        //Nous stockons le contenu du fichier lu dans une chaîne temporaire.
        //string temp_line = line;
        
        // 
        size_t pos = line.find(' ');
        string coordonne_X, coordonne_Y;
    
        if(pos != string::npos){
            coordonne_X = line.substr(0,pos); 
            coordonne_Y = line.substr(pos + 1); 
        }else{
            continue;
        }
        //sauter des lignes vides
        if (coordonne_X.empty() || coordonne_Y.empty()) {continue;}

        // convertir de string au double
        double x = std::stod(coordonne_X);
        double y = std::stod(coordonne_Y);

        // convertir KML
        transforme_CH1903_WGS84(x,y);

        //ecriture dans un fichier
        sauvegarde(nom_fichier_sortie,x,y);

    }


    return EXIT_SUCCESS;
}

void transforme_CH1903_WGS84(double & x,double &y){
    // 1 km = 1000 metre 
    const double metre_par_km = 1000.0;

    // convertir en metre
    double x_en_metre = x * metre_par_km; 
    double y_en_metre = y * metre_par_km;

    // selon la formul λ 
    double lambda = 7.4386372 + (13.13606 * x_en_metre) + (2.19856 * x_en_metre * y_en_metre) + (0.3628 * x_en_metre * (y_en_metre * y_en_metre)) - (0.121 * ( x_en_metre * x_en_metre * x_en_metre));

    // selon la formul ϕ
    double phi = 46.9510811 + (8.9952 * y_en_metre ) - (0.75272 * ( x_en_metre * x_en_metre)) - (0.00702 * ( y_en_metre * y_en_metre)) - (0.1242 * (x_en_metre * x_en_metre) * y_en_metre) - (0.0389 * (y_en_metre * y_en_metre * y_en_metre));
    
    // longtitude en degree
    x   = lambda;
    // lattitude en degree
    y   = phi;
  
}

void sauvegarde(const string & nom_fichier_sortie, double lambda, double phi){
    
    ofstream fichier_sortie(nom_fichier_sortie,ios::out | ios::app);
    
    // verification si le fichier existe 
    if(!fichier_sortie){
        cerr << "Erreur d'ouverture!!!";
        return;
    }

    fichier_sortie << lambda << "," << phi << endl;
    fichier_sortie.close();
    
}
