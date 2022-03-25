#ifndef _Liste_h
#define _Liste_h


//definition de la structure type_liste
typedef struct struct_maillon{
    //declaration d'un int
    int val;
    //declaration d'un type(de type pointeur sur struct_maillon) qui s'apel next
    struct struct_maillon * next;
}type_maillon;


typedef struct struct_premierMaillonListe{
    //declaration d'un type(de type pointeur sur struct_maillon) qui s'apel premierMaillon
    struct struct_maillon* premierMaillon;
}type_liste;

typedef type_liste * type_maillon;


//prototypes des méthodes (sorte de template de methode que on va instancier ?)

//creation liste vide
type_liste creer_liste();


//fonction pour voir si la liste est vide
//int isEmplyListe(type_liste *);

//fonction pour avoir la taille de la liste

//fonction pour ajouter un element en tete de liste
typedef struct sAjouEnTeteDeListe{
    
    /*
    creation de mon maillon avec mes 2 case la  (de type struct_maillon, une structure)
    on met le pointeur du maillon a la valeur du premierMallion

    en c
    on prend une variablen pNouv 
    struct_maillon * pNouv = (struct_maillon)maloc(siseof(struct_maillon));
    maloc alou un espace memoire pour notre nouveau maillon (il prend en parametre la taille de struct_maillon)

    ensuite si pNouv != null
        pNouv -> val; //(*pNouv).val;     on met a jour le premier chan
        pNouv -> next = struct_premierMaillonListe, on met notre maillon a ???
        struct_premierMaillonListe = pNouv;
    
    T_liste struct_premierMaillonListe = NULL;

    */
     
    
    struct_maillon * struct_premierMaillonListe = pNouv = (struct_maillon*)maloc;
};

//fonction pour ajouter un element de la lista a une position donée

//fonction pour recupere un element de la lista a une position donée

//fonction pour modifier un element de la lista a une position donée

//fonction pour effacer un element de la lista a une position donée

//fonction pour aficher un element de la lista a une position donée

//fonction pour aficher la lista

// ajout en tete de liste de element avec modification de la liste
void ajout_entete_liste(type_liste, int element);

// ajout en tete selon une approche fonctionnelle sans modification de la liste
type_liste ajouter_entete_fonc(..., int element);

//AFFICHAGE

// affichages itératif
void afficher_liste(type_liste);
// récursif dans l ordre de la liste
void afficher_liste_recursif(type_liste);
// récursif dans l ordre inverse de la liste
void fafficher_inv_liste(type_liste);


// liberation de la mémoire
void liberer_liste(type_liste);
#endif