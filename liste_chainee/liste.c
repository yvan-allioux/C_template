#include <stdio.h>
#include <stdlib.h>

#include "liste.h"


//creation liste vide
Liste* creer_liste(){
    Liste* ptMaListe = malloc(sizeof(ptMaListe));
    ptMaListe->premierMaillon = NULL; //inisialisation
    return ptMaListe;
};

//creation maillon


//ajout en tete de liste
void ajout_entete_liste(Liste* pointeurSurMaListe, int element){
    //ajout maillon
    Maillon* monPremierMaillonInitial = pointeurSurMaListe->premierMaillon;
    
    Maillon* pointeurSurNouveauPremierMaillon = malloc(sizeof(Maillon));
    if (pointeurSurNouveauPremierMaillon == NULL){exit(EXIT_FAILURE);};//test si echeque d'alocation de memoire
    pointeurSurNouveauPremierMaillon->val = element;
    pointeurSurNouveauPremierMaillon->next = pointeurSurMaListe->premierMaillon;

    pointeurSurMaListe->premierMaillon = pointeurSurNouveauPremierMaillon;
};

//fonction
int isEmplyListeFonction(Liste* ptMaListe){
    if(ptMaListe->premierMaillon == NULL){
        return 1;
    }else{
        return 0;
    }
};
//procédure
void isEmplyListeProcedure(Liste* ptMaListe, int* isEmply){//isEmply est un pointeur vers une variable de test
    if(ptMaListe->premierMaillon == NULL){
        *isEmply = 1;
    }else{
        *isEmply = 0;
    }
};

//affichages
void afficher_liste(Liste* pointeurSurMaListe){
    Maillon* ptSurUnMaillon = pointeurSurMaListe->premierMaillon;

    if (ptSurUnMaillon != NULL){printf("Liste vide\n");}//si la liste est vide (ça pointe sur du NULL) on prévien quand meme on est pas des sauvage

    while (ptSurUnMaillon != NULL)
    {
        printf("val %d\n", ptSurUnMaillon->val);
        ptSurUnMaillon = ptSurUnMaillon->next;
    }
  
    
};

// itératif

//afficher la liste
//void afficher_liste(){};



// récursif dans l ordre de la liste
//void fafficher_dir_liste();
// récursif dans l ordre inverse de la liste
//void fafficher_inv_liste();

// liberation de la mémoire
//void liberer_liste(Liste);



int main(){
    printf("-----Les liste chainee-----\n");

    //INITIALISATION
    Liste* pointeurSurMaListe = creer_liste();

//IS EMPLY
    //fonction
    printf("isEmplyListeFonction : %d ", isEmplyListeFonction(pointeurSurMaListe));
    //procedure
    int varIsEmply = 0;
    isEmplyListeProcedure(pointeurSurMaListe, &varIsEmply);
    printf("isEmplyListeProcedure : %d\n", varIsEmply);

//AJOUT EN TETE DE LISTE
    ajout_entete_liste(pointeurSurMaListe, 42);
    
//IS EMPLY
    //fonction
    printf("isEmplyListeFonction : %d ", isEmplyListeFonction(pointeurSurMaListe));
    //procedure
    varIsEmply = 0;
    isEmplyListeProcedure(pointeurSurMaListe, &varIsEmply);
    printf("isEmplyListeProcedure : %d\n", varIsEmply);

//AJOUT EN TETE DE LISTE
    for (int i = 0; i < 5; i++)
    {
        ajout_entete_liste(pointeurSurMaListe, i);
    }

//AFFICHER LISTE
    afficher_liste(pointeurSurMaListe);

    /* ajout_entete_liste(struct_premierMaillonListe, 2);
    ajout_entete_liste(struct_premierMaillonListe, 3);
    
    liberer_liste(struct_premierMaillonListe); */
    return 0;
}





