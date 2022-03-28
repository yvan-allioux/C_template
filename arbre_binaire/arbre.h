/* En-tete de arbre
   ----------------
   objectif : définir le TAA arbre */

#ifndef ARBRE_H
#define ARBRE_H


/* struct noeud a definir */
typedef struct noeud {
    int val;//valeur du noeud
    struct noeud * g;//gauche
    struct noeud * d;//droit
}T_node;

/* type T_Tree  a definir */
typedef T_node * T_Tree;//T_Tree est un pointeur vers T_node

// initialise l'arbre declare
T_Tree init_Tree();

//T_Tree arbre_vide();

// creer un noeud de fils g/d vide, de valeur i  et renvoie son adresse
T_Tree creer_noeud(int i);
T_Tree creation_ABR_exemple();
int poids(T_Tree);
int rayon(T_Tree);

#endif