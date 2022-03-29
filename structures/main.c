#include <stdio.h>
#include "rectangle.h"
#include "boolean.h"
#include "coordonnees.h"


int main()
{
    printf("---les structure---\n");

    struct Rectangle monRectangle; // Création d'une variable "monRectangle" de type Rectangle
    monRectangle.largeur = 10;
    monRectangle.hauteur = 5;
    monRectangle.aire = monRectangle.largeur * monRectangle.hauteur;
    monRectangle.perimetre = (monRectangle.largeur + monRectangle.hauteur) * 2;

    //affichage des valeurs de la structure
    printf("largeur : %d\n", monRectangle.largeur);
    printf("hauteur : %d\n", monRectangle.hauteur);
    printf("aire : %d\n", monRectangle.aire);
    printf("perimetre : %d\n", monRectangle.perimetre);

    struct Rectangle monRectangle3, monRectangle4;

    Coordonnees nuageDePoints[3];//on cree un tableau de 3 coordonnees
    nuageDePoints[3].x = 1;

    Coordonnees point; // L'ordinateur comprend qu'il s'agit de "struct Coordonnees" grâce au typedef
    Coordonnees point = {0, 0};//on remplit la structure point avec les valeurs 0,0 - point.x = 0 , point.y = 0

    point.x = 10;
    point.y = 20;// Initialisation des variables de la structure

    //ajouter 5 au point.x
    point.x += 5;

    
    //declaration
    BOOLEAN b1,b2;

    //initialisation
    b1 = VRAI;
    b2 = FAUX;

    if (b2 == FAUX){
        printf("b2 == FAUX\n");
    }else{
        printf("b2 == VRAI\n");
    }

    if (b1 == FAUX){
        printf("b2 == FAUX\n");
    }else{
        printf("b2 == VRAI\n");
    }
    
    return 0;
}
