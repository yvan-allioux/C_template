#include <stdio.h>
#include "main.h"
#include "aire.h"
#include "power.h"

int triple(int nombre)
{
    int resultat = 0;

    resultat = 3 * nombre;  // On multiplie le nombre fourni par 3
    return resultat;       // On retourne la variable resultat qui vaut le triple de nombre
}

//La ligne suivante est le prototype de la fonction aireRectangle :
//int aireRectangle(double largeur, double hauteur);
//on met les prototype dans le fichier header c'est mieux



int main()
{
    printf("les fonction \n");

    int i = 3;

    printf("valeur de i %d\n", i);

    i = triple(i);
    
    printf("valeur de i %d\n", i);

    printf("power= %d\n", myPower(5, 10));

    //printf("Rectangle de largeur 5 et hauteur 10. Aire = %d\n", aireRectangle(5, 10));

    maFonctionQuiNeRenvoisRienQuiPrintf(2);

    return 0;
}

void maFonctionQuiNeRenvoisRienQuiPrintf(int nombre){
    printf("maFonctionQuiNeRenvoisRienQuiPrintf : %d\n", nombre);
}



// Notre fonction aireRectangle peut maintenant être mise n'importe où dans le code source :
/* int aireRectangle(double largeur, double hauteur)
{
    return largeur * hauteur;
} */
