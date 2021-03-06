#ifndef _Liste_h
#define _Liste_h


//definition du type Maillon
typedef struct Maillon Maillon;
//definition du type Liste
struct Maillon{
    //declaration d'un int
    int val;
    //declaration d'un pointeur sur Maillon qui s'apel next
    Maillon* next;
};

//definition du type Liste
typedef struct Liste Liste;
//definition de la struture Liste
struct Liste{
    //declaration d'un pointeur sur Maillon qui s'appel premierMaillon
    Maillon* premierMaillon;
};


//prototypes des méthodes (sorte de template de methode que on va instancier ?)

//creation liste vide
Liste* creer_liste();

void invercerListe(Liste*);


//fonction pour voir si la liste est vide
int isEmplyListeFonction(Liste*);
void isEmplyListeProcedure(Liste*, int*);

//fonction pour avoir la taille de la liste

//fonction pour ajouter un element en tete de liste
//typedef struct sAjouEnTeteDeListe{
    
    /*
    creation de mon maillon avec mes 2 case la  (de type Maillon, une structure)
    on met le pointeur du maillon a la valeur du premierMallion

    en c
    on prend une variablen pNouv 
    Maillon * pNouv = (Maillon)maloc(siseof(Maillon));
    maloc alou un espace memoire pour notre nouveau maillon (il prend en parametre la taille de Maillon)

    ensuite si pNouv != null
        pNouv -> val; //(*pNouv).val;     on met a jour le premier chan
        pNouv -> next = struct_premierMaillonListe, on met notre maillon a ???
        struct_premierMaillonListe = pNouv;
    
    T_liste struct_premierMaillonListe = NULL;

    */
     
    
/*     Maillon * struct_premierMaillonListe = pNouv = (Maillon*)maloc;
}; */

//fonction pour ajouter un element de la lista a une position donée

//fonction pour recupere un element de la lista a une position donée

//fonction pour modifier un element de la lista a une position donée

//fonction pour effacer un element de la lista a une position donée

//fonction pour aficher un element de la lista a une position donée

//fonction pour aficher la lista

// ajout en tete de liste de element avec modification de la liste
void ajout_entete_liste(Liste* pointeurSurMaListe, int element);

// ajout en tete selon une approche fonctionnelle sans modification de la liste
Liste ajouter_entete_fonc(Liste, int element);

//AFFICHAGE

// affichages itératif
void afficher_liste(Liste*);
// récursif dans l ordre de la liste
void afficher_liste_recursif(Liste);
// récursif dans l ordre inverse de la liste
void fafficher_inv_liste(Liste);


// liberation de la mémoire
void liberer_liste(Liste);

#endif