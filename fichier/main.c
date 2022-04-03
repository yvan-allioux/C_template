#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define TAILLE_MAX 100

int main(void) {

    printf("-----FICHIER-----\n");

    //ouverture fichier
    FILE* fichierTest = NULL;//on crée un pointeur sur le fichier
    fichierTest = fopen("test.txt", "r+");//on ouvre le fichier en mode lecture et écriture, Le pointeur fichier devient alors un pointeur sur test.txt

    FILE* fichierHello = NULL;//on crée un pointeur sur le fichier
    fichierHello = fopen("txt/hello.txt", "r");//chemin relatif
    //fichierHello = fopen("/home/user/Documents/GitHub/C_template/fichier/helloTxt/hello.txt", "r");//chemin absolu

    if (fichierTest != NULL)
    {
        fputc('A', fichierTest); // Écriture du caractère A
        fclose(fichierTest);
    }

    FILE* fichier2 = NULL;
    fichier2 = fopen("txt/fichier2.txt", "r+");
    if (fichier2 != NULL)
    {
        fputs("Bonjour Monde\nC'est super !\n", fichier2);
        fprintf(fichier2, "Le Monsieur qui utilise le programme, il a %d ans\n", 22);
        fclose(fichier2);
    }

    int caractereActuel = 0;
    do
    {
        caractereActuel = fgetc(fichierHello); // On lit le caractère
        printf("%c", caractereActuel); // On l'affiche
    } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
    fclose(fichierHello);

    printf("\n---\n");



    FILE* fichier4 = NULL;
    char chaine[TAILLE_MAX] = "";
 
    fichier4 = fopen("txt/fichier2.txt", "r");
 
    if (fichier4 != NULL)
    {
        while (fgets(chaine, TAILLE_MAX, fichier4) != NULL) // On lit le fichier4 tant qu'on ne reçoit pas d'erreur (NULL)
        {
            printf("%s", chaine); // On affiche la chaîne qu'on vient de lire
        }
 
        fclose(fichier4);
    }
    
    
    return 0;
}
