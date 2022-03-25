/* En-tete de arbre
   ----------------
   objectif : définir le TAA arbre */

#ifndef ARBRE_H
#define ARBRE_H


/* struct noeud a definir */
/* type T_Tree  a definir */

// initialise l'arbre declare
T_Tree arbre_vide();
// creer un noeud de fils g/d vide, de valeur i  et renvoie son adresse
T_Tree creer_noeud(int i);
T_Tree creation_ABR_exemple();
int poids(T_Tree);
int rayon(T_Tree);
#endif