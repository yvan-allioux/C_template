/* ==================================== Include    =================================== */
#include <stdio.h>
#include <stdlib.h>

#include "liste.h"

/* ==================================== Functions and procedures =================================== */

// creation liste vide
type_premierMaillonListe creer_liste(){
 //initialisation 
};

// ajout en tete de liste de element avec modification de la liste
t_maillon *creer_maillon(t_film *pt_film)
void ajout_entete_liste(..., int element){
    //alocation du filme
	//alou un maillon
	t_maillon *pt_maillon = (t_maillon *)malloc(sizeof(t_maillon));
	if (pt_maillon != NULL)
	{
		pt_maillon->pt_film = pt_film;
		pt_maillon->pt_suiv = NULL;
	}
	return pt_maillon;
}

// ajout en tete selon une approche fonctionnelle sans modification de la liste
T_liste ajouter_entete_fonc(..., int element);

// affichages

// itératif
void afficher_liste();
// récursif dans l ordre de la liste
void fafficher_dir_liste();
// récursif dans l ordre inverse de la liste
void fafficher_inv_liste();

// liberation de la mémoire
void liberer_liste(?);









