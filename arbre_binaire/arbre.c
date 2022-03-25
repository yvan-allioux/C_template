#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "arbre.h"



T_Tree init_Tree(){
    return NULL;
    }

T_Tree creer_noeud(int i){
    T_Tree t = (T_node *) malloc(sizeof(T_node));
    if (t!=NULL){
        t -> val = i;
        t -> g = NULL;
        t -> d = NULL;
        }
    else{
        printf("pbm allocation memoire!\n");
        }
    return t;
    }
T_Tree creation_ABR_exemple(){
      T_Tree tree18, tree24, tree4, tree12;

      tree18 = creer_noeud(18);
      tree24 = creer_noeud(24);
      tree4 = creer_noeud(4);
      tree12 = creer_noeud(12);

      tree18->g = tree4;
      tree4->d = tree12;
      tree18->d = tree24;

      return tree18;
    }


int main(){

    T_Tree a;
    a = init_Tree();
    return 0;
    }