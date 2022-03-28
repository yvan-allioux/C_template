#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "arbre.h"

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
    T_Tree tree18, tree24, tree4, tree12;

    tree18 = creer_noeud(18);
    tree24 = creer_noeud(24);
    tree4 = creer_noeud(4);
    tree12 = creer_noeud(12);

    tree18->g = tree4;
    tree4->d = tree12;
    tree18->d = tree24;
    //tree24.d = tree24;

    return tree18;
}

//longueur de l'arbre
int rayon(T_Tree monArbreParam)
{
    /* if (monArbreParam == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + (rayon(monArbreParam->g) > rayon(monArbreParam->d) ? rayon(monArbreParam->g) : rayon(monArbreParam->d));
    } */

    
}

int main()
{

    T_Tree monArbre; // declaration d'un arbre
    monArbre = init_Tree();//initialisation de l'arbre
    //init_Tree(monArbre); // initialisation de l'arbre
    monArbre = creation_ABR_exemple();
    printf("poids %d\n", poids(monArbre));
    printf("longeur/rayon %d\n", rayon(monArbre));
    return 0;
}