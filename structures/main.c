#include <stdio.h>
#include "rectangle.h"
#include "boolean.h"
#include "coordonnees.h"
#include "volume.h"

void initialiserCoordonnees(Coordonnees* pointeurSurMaCoordonnees){
    //printf("pointeurSurMaCoordonnees : %p\n", pointeurSurMaCoordonnees);
    (*pointeurSurMaCoordonnees).x = 42; //on met des parenthèses pour englober le pointeur 
    //le point de séparation "." s'applique sur le mot pointeurSurMaCoordonnees et non sur *pointeurSurMaCoordonnees en entier. Or, nous ce qu'on veut, c'est accéder à *pointeurSurMaCoordonnees pour en modifier la valeur
    
    //la fleche est un racourci pour travailler directement sur un pointeur
    pointeurSurMaCoordonnees->y = 42;
}

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
    printf("nuageDePoints[3].x : %d\n", nuageDePoints[3].x);

    Coordonnees point; // L'ordinateur comprend qu'il s'agit de "struct Coordonnees" grâce au typedef
    Coordonnees point2 = {3, 8};//on remplit la structure point avec les valeurs 0,0 - point.x = 0 , point.y = 0

    point.x = 10;
    point.y = 20;// Initialisation des variables de la structure

    //ajouter 5 au point.x
    point.x += 5;

    //LES FONCTIONS
    Coordonnees point3;
    Coordonnees *point3Pointeur = &point3;
    printf("point3Pointeur : %p\n", point3Pointeur);

    //passage d'une variable structure dans une fonction (via un pointeur)
    initialiserCoordonnees(point3Pointeur);
    //affichage point3
    printf("point3.x : %d\n", point3.x);
    printf("point3.y : %d\n", point3.y);

    //LA FLÈCHE
    Coordonnees monPoint;
    Coordonnees *pointeur = &monPoint;
    monPoint.x = 10; // On travaille sur une variable, on utilise le "point"
    pointeur->x = 10; // On travaille sur un pointeur, on utilise la flèche

    //ENUMERATION
    Volume musique = MOYEN;
    
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
