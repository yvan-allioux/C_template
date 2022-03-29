#include <stdio.h>
#include <stdlib.h>

#include "liste.h"


//creation liste vide
Liste creer_liste(){
    Liste maListe;
    maListe.premierMaillon = NULL;
    return maListe;
};

//creation liste vide Liste


//ajout en tete de liste
void ajout_entete_liste(Liste *maListe, int element){
    //ajout maillon
    Maillon* premierMaillon = maListe;
    Maillon* pNouv = (Maillon*)maloc(siseof(Maillon));
};

//fonction
int isEmplyListeFonction(Liste* maListe){
    if(maListe->premierMaillon == NULL){
        return 1;
    }else{
        return 0;
    }
};
//procédure
void isEmplyListeProcedure(Liste* maListe, int *isEmply){//isEmply est un pointeur vers une variable de test
    if(maListe->premierMaillon == NULL){
        *isEmply = 1;
    }else{
        *isEmply = 0;
    }
};

// affichages

// itératif

//afficher la liste
//void afficher_liste(){};



// récursif dans l ordre de la liste
//void fafficher_dir_liste();
// récursif dans l ordre inverse de la liste
//void fafficher_inv_liste();

// liberation de la mémoire
//void liberer_liste(Liste);



main(){
    Liste maListe;
    Liste maListe = creer_liste();

    Liste* unPointeurSurListe = &maliste;
    printf("isEmplyListe : %d", isEmplyListe(unPointeurSurListe));
    ajout_entete_liste(*maListe, 11);

    /* ajout_entete_liste(struct_premierMaillonListe, 2);
    ajout_entete_liste(struct_premierMaillonListe, 3);
    afficher_liste(struct_premierMaillonListe);
    liberer_liste(struct_premierMaillonListe); */
}





