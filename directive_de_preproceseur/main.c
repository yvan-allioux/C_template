#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE_MAX   1000

#define LARGEUR_FENETRE  800
#define HAUTEUR_FENETRE  600
#define NOMBRE_PIXELS    (LARGEUR_FENETRE * HAUTEUR_FENETRE) //calcul dans les directive de préproceseur

#define COUCOU() printf("Coucou\n");

#define DEBUG() printf("Erreur a la ligne %d du fichier %s\n", __LINE__, __FILE__);\
                printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);

#define MAJEUR(age) if (age >= 18) \
                    printf("Vous etes majeur\n");


int main()
{
    printf("les directive de preproceseur\n");

    char largeur[LARGEUR_FENETRE], hauteur[HAUTEUR_FENETRE];

    printf("Erreur a la ligne %d du fichier %s\n", __LINE__, __FILE__);
    printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);

    COUCOU()

    DEBUG() // ligne pour le préprocesseur pas besoin d'être terminée par un point-virgule

    MAJEUR(22)


    return 0;
}

