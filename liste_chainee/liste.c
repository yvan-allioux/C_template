#include <stdio.h>
#include <stdlib.h>

#include "liste.h"


//creation liste vide
type_liste creer_liste(){
    type_liste struct_premierMaillonListe = NULL;
    return struct_premierMaillonListe;
};

//creation liste vide type_liste

//ajout en tete de liste de element avec modification de la liste

//ajout en tete de liste
ajout_enete_liste(type_liste * maListe, int element){
    //ajout maillon
    struct_maillon * pNouv = (struct_maillon*)maloc(siseof(struct_maillon));
};

// affichages

// itératif

//afficher la liste
void afficher_liste(){

};



// récursif dans l ordre de la liste
void fafficher_dir_liste();
// récursif dans l ordre inverse de la liste
void fafficher_inv_liste();

// liberation de la mémoire
void liberer_liste(type_liste);



main(){
    type_liste maListe = creer_liste();
    ajout_entete_liste(struct_premierMaillonListe, 1);

    /* ajout_entete_liste(struct_premierMaillonListe, 2);
    ajout_entete_liste(struct_premierMaillonListe, 3);
    afficher_liste(struct_premierMaillonListe);
    liberer_liste(struct_premierMaillonListe); */
}





