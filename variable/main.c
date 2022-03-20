#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int compteur(int nombre)
{
    //variable static qui ne se suprime pas quand on termine la fonction
    static int resultat = 0;
    resultat = resultat + nombre;
    return resultat;
}

int main()
{
    printf("les variables\n");

    int i = 65, nombreMystere = 0; // int clasique
    long var2 = 2147483646;
    char monChar = 'A';
    //constante
    const int MAX = 100, MIN = 1;

    //pointeur, variable contenant l'adresse de i et qui a pour format "pointeur"
    printf("valeur de i %d\n", i);
    printf("valeur du pointeur &i avec le parametre d'afichage \"p\" : %p\n", &i);
    //connaître l'adresse d'une variable
    //printf("%p\n", &i);

    //print d'un char
    printf("valeur de du char 'A' en int  %d\n", monChar);

    //les variable statique
    printf("mon compteur +1 : %d\n", compteur(1));
    printf("mon compteur +4 : %d\n", compteur(4));
    printf("mon compteur +10 : %d\n", compteur(10));

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("variable random entre 1 et 100 :%d\n", nombreMystere);

    //taille des type de variable
    printf("char : %d octets\n", sizeof(char));
    printf("int : %d octets\n", sizeof(int));
    printf("long : %d octets\n", sizeof(long));
    printf("double : %d octets\n", sizeof(double));
    printf("pointeur : %d octets\n", sizeof(int*));

    return 0;
}

