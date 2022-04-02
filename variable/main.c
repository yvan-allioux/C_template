#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE_MAX   1000

#define LARGEUR_FENETRE  800
#define HAUTEUR_FENETRE  600
#define NOMBRE_PIXELS    (LARGEUR_FENETRE * HAUTEUR_FENETRE) //calcul dans les directive de préproceseur

/**
 * @brief 
 * compteur avec variable static qui s'incrémente à chaque appel (ne ce renitialise pas si on quite la fonction)
 * @param nombre 
 * @return int 
 */
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




    char chaine[6]; // Tableau de 6 char pour stocker S-a-l-u-t + le \0
    // Initialisation de la chaîne (on écrit les caractères un à un en mémoire)
    chaine[0] = 'S';
    chaine[1] = 'a';
    chaine[2] = 'l';
    chaine[3] = 'u';
    chaine[4] = 't';
    chaine[5] = '\0';

    char chaine3[] = "Salut"; // La taille du tableau chaine est automatiquement calculée
    
    /* On crée 2 chaînes. chaine1 doit être assez grande pour accueillir
    le contenu de chaine2 en plus, sinon risque de plantage */
    char chaine1[100] = "Salut ", chaine2[] = "Mateo21";
    strcat(chaine1, chaine2); // On concatène chaine2 dans chaine1
    // Si tout s'est bien passé, chaine1 vaut "Salut Mateo21"
    printf("chaine1 vaut : %s\n", chaine1);
    // chaine2 n'a pas changé :
    printf("chaine2 vaut toujours : %s\n", chaine2);
    
    if (strcmp(chaine1, chaine2) == 0) // Si chaînes identiques
    {
        printf("Les chaines sont identiques\n");
    }
    else
    {
        printf("Les chaines sont differentes\n");
    }






    //constante
    const int MAX = 100, MIN = 1;
    int maConstante = TAILLE_MAX; //constante avec directive de préprocesseur

    //directive de préproceseur
    printf("####Erreur a la ligne %d du fichier %s Ce fichier a ete compile le %s a %s\n", __LINE__, __FILE__,__DATE__, __TIME__);

    //pointeur, variable contenant l'adresse de i et qui a pour format "pointeur"
    printf("valeur de i %d\n", i);
    printf("valeur du pointeur &i avec le parametre d'afichage \"p\" : %p\n", &i);
    //connaître l'adresse d'une variable
    //printf("%p\n", &i);

    //print d'un char
    printf("valeur du char 'A' en int  %d\n", monChar);
    printf("valeur du char 'A' en char %c\n", monChar); //A

    // Affichage de la chaîne grâce au %s du printf
    printf("valeur de la chaine : %s\n", chaine);
    printf("valeur de la chaine3 : %s\n", chaine3);

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

