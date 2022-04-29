#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "arbre.h"

//pois de l'arbre : nombre de valeur
int poids(T_Tree monArbreParam)
{
    if (monArbreParam == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + poids(monArbreParam->g) + poids(monArbreParam->d);
    }
}

T_Tree init_Tree()
{
    T_Tree arbre = (T_Tree)malloc(sizeof(T_Tree)); // on alloue de la memoire pour l'arbre
    return arbre;
}

T_Tree creer_noeud(int i)
{
    T_Tree t = (T_node *)malloc(sizeof(T_node)); // on alloue de la memoire pour le noeud
    if (t != NULL)
    {
        t->val = i;
        t->g = NULL;
        t->d = NULL;
    }
    else
    {
        printf("pbm allocation memoire!\n");
    }
    return t;
}

T_Tree creation_ABR_exemple()
{
    T_Tree tree18, tree24, tree4, tree12, tree14, tree15, tree16;

    tree18 = creer_noeud(18);
    tree24 = creer_noeud(24);
    tree4 = creer_noeud(4);
    tree12 = creer_noeud(12);

    tree14 = creer_noeud(14);
    tree15 = creer_noeud(35);
    tree16 = creer_noeud(31);

    tree18->g = tree4;
    tree4->d = tree12;
    tree18->d = tree24;
    tree12->g = tree14;

    tree14->g = tree15;
    tree15->g = tree16;


    return tree18;
}

//rayon de l'arbre
int rayon(T_Tree monArbreParam)
{
    if (monArbreParam == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + (rayon(monArbreParam->g) > rayon(monArbreParam->d) ? rayon(monArbreParam->g) : rayon(monArbreParam->d));
    }
}

//affichage de l'arbre
void afficher_arbre(T_Tree monArbreParam)
{
    if (monArbreParam == NULL)
    {
        return 0;
    }
    else
    {
        printf("%d\n", monArbreParam->val);
        afficher_arbre(monArbreParam->g);
        afficher_arbre(monArbreParam->d);
    }
}

//affichage de l'arbre
void affichage_complex_arbre(T_Tree monArbreParam)
{
    if (monArbreParam == NULL)
    {
        return 0;
    }
    else
    {
        printf("%d - pois %d\n", monArbreParam->val, poids(monArbreParam));
        affichage_complex_arbre(monArbreParam->g);
        affichage_complex_arbre(monArbreParam->d);
    }
}


int main()
{
    printf("################################\n");
    T_Tree monArbre; // declaration d'un arbre
    monArbre = init_Tree();//initialisation de l'arbre
    //init_Tree(monArbre); // initialisation de l'arbre
    monArbre = creation_ABR_exemple();
    printf("poids %d\n", poids(monArbre));
    printf("longeur/rayon %d\n", rayon(monArbre));
    printf("-affichage-\n");
    afficher_arbre(monArbre);
    printf("-affichage complex-\n");
    affichage_complex_arbre(monArbre);
    return 0;
}