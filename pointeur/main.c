#include <stdio.h>

void triplePointeur(int *pointeurSurNombre); //prototype, cette fonction prend un paramètre de type int*  (c'est-à-dire un pointeur sur int)

int main()
{
    printf("les pointeurs, variable contenant l'adresse d'une variable et qui a pour format \"pointeur\"\n");

    int age = 22;
    double taille = 65.35;
    char monChar = age;
    //initialisation d'une variable de type pointeur, initialisé a NULL pour dir que cela ne pointe sur rien pour l'instant(contient aucune adresse)
    int *monPointeur = NULL; //declaration de pointeur
    int* monPointeur2 = NULL; //declaration de pointeur
    int *monPointeurSurAge = &age; //Je crée un pointeur pour un int, monPointeurSurAge contient l'adresse de la variable age
    double *monPointeurSurTaille = &taille; //Je crée un pointeur pour un double, monPointeurSurTaille contient l'adresse de la variable age
    int age2 = *monPointeurSurAge; //ici on initialise age2 a la variable pointée par le pointeur monPointeurSurAge

    printf("monPointeurSurAge param p %p\n", monPointeurSurAge);
    printf("*monPointeurSurAge param d %d\n", *monPointeurSurAge);//on dit que on veut recupere la variable pointé par le pointeur monPointeurSurAge

    printf("valeur de age %d\n", age);
    printf("valeur du pointeur &age avec le parametre d'afichage \"p\" pour pointeur : %p\n", &age);
    //printf("valeur du pointeur &i avec le parametre d'afichage \"d\" pour data : %d\n", &i);

    printf("valeur de taille %f\n", taille);
    printf("pointeur monPointeurSurTaille %p\n", monPointeurSurTaille);

    //fonction pointeur
    int nombre = 5;
    triplePointeur(&nombre); // On envoie l'adresse de nombre à la fonction
    printf("variable nombre %d\n", nombre); // On affiche la variable nombre. La fonction a directement modifié la valeur de la variable car elle connaissait son adresse
    //fonction pointeur autre ecriture
    nombre = 3;
    int *pointeurSurNombre = &nombre; // pointeur prend l'adresse de nombre
    triplePointeur(pointeurSurNombre); // On envoie pointeur (l'adresse de nombre) à la fonction
    printf("variable nombre (*pointeurSurNombre) %d\n", *pointeurSurNombre); // On affiche la valeur de nombre avec *pointeur

    return 0;
}



void triplePointeur(int *pointeurSurNombre) //prend un paramètre de type int*  (c'est-à-dire un pointeur sur int)
{
    *pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
}
