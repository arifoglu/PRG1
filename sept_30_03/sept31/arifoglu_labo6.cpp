// abdulkadir arifoglu - 30.09.2024 - Laboratoire 6
/* - un programme qui va lire les coordonnées x et y quatre sommets d'un quadrilatère
   - ces coordonnées seront entières
   - programmme va indiquer si le quadrilatère est un carré,un rectangle,un losange,un parallélogramme,un trapèze
   - utilisateur va taper des coordonnées dans le console,programme va les calculer
pour indiquer les formes.
*/
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    // les coordnonées => (Ax,Ay) (Bx,By) (Cx,Cy) (Dx,Dy) 
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
    cout << "Entrez les coordonnées (Ax Ay Bx By Cx Cy Dx Dy) : ";
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;

    // verifier les vectors si est parallel ou perpendiculaire  
    // ax * by == ay * bx       => paralleles
    // ax * bx + ay * by = 0    => perpendiculaires
    // paralleles
    bool AB_parallel_CD = (Bx - Ax) * (Dy - Cy) == (By - Ay) * (Dx - Cx);
    bool BC_parallel_DA = (Cx - Bx) * (Ay - Dy) == (Cy - By) * (Ax - Dx);
    // perpendicaulaires
    bool AB_perpendiculaire_BC = (Bx - Ax) * (Cx - Ax) + (By - Ay) * (Cy - By) == 0;
    bool BC_perpendiculaire_CD = (Cx - Bx) * (Dx - Cx) + (Cy - By) * (Dy - Cy) == 0;
    bool CD_perpendiculaire_DA = (Dx - Cx) * (Ax - Dx) + (Dy - Cy) * (Ay - Dy) == 0;
    bool DA_perpendiculaire_AB = (Ax - Dx) * (Bx - Ax) + (Ay - Dy) * (By - Ay) == 0;

    /*
     - Calculer les longeurs des côtes
     - pour le formula deux vectors : (Ax , Ay) (Bx , By) 
     - longeurs = sqrt((Bx - Ax) * (Bx - Ax) + (By - Ay) * (By - Ay));
         
     Nous allons calculer chaque longeurs des côtes(A B C D) => AB,BC,CD,DA 
     AB = longeur_vector_AB;
     BC = longeur_vector_BC;
     CD = longeur_vector_CD;
     DA = longeur_vector_DA;
    */
    // nous allons utiliser sqrt() de <cmath>
    double AB = sqrt((Bx - Ax) * (Bx - Ax) + (By - Ay) * (By - Ay));  
    double BC = sqrt((Cx - Bx) * (Cx - Bx) + (Cy - By) * (Cy - By));  
    double CD = sqrt((Dx - Cx) * (Dx - Cx) + (Dy - By) * (Dy - By));  
    double DA = sqrt((Dx - Ax) * (Dx - Ax) + (Dy - Ay) * (Dy - Ay));  
    
    // verifier les types
    // verifier des côtes
    if(AB == BC && BC == CD && CD == DA)
    {
        if(AB_perpendiculaire_BC && BC_perpendiculaire_CD)//  Vérifier les angles de 90 degrés
        {
            cout << "Le quadrilatère est un carré. ";// Tous les côtés sont égaux et les angles sont de 90°
        }
        else
        {
            cout << "Le quadrilatère est un losange. ";// Tous les côtés sont égaux et les angles ne sont pas de 90°
        }
    }
    else if(AB_parallel_CD && BC_parallel_DA) // Les côtés opposés sont parallèles
    {
        if(AB == CD && BC == DA && (AB_perpendiculaire_BC || BC_perpendiculaire_CD || CD_perpendiculaire_DA || DA_perpendiculaire_AB))  
        {
            cout << "Le quadrilatère est un rectangle. " << endl;// Angles 90° et les côtés opposés égaux
        }
        else{
            cout << "Le quadrilatère est un parallélogramme. " << endl;// Seulement les côtés opposés sont parallèles
        }
    }
    else if(AB_parallel_CD || BC_parallel_DA){
            cout << "Le quadrilatère est un trapeze . " << endl;// Au moins une paire de côtés est parallèle
    }
    else
    {
        cout << "Aucun type ";
    }
    
    return EXIT_SUCCESS;
}