#include <stdio.h>

int moyenne(int taille, int pTab[]){
    int i=0;
    int somme = 0;
    for (i = 0 ; i < taille ; i++)
    {
        somme = somme + pTab[i];
    }
    return somme/taille;
}

void afficheTab(int taille, int *pTab){// ou void affiche(int taille, int pTab[])
    int i=0;
    printf("####afficheTab#%d\n", taille);
    for (i = 0 ; i < taille ; i++)
    {
        printf("%d\n", pTab[i]);
    }
    printf("####afficheTab#");
}

//recherche dichotomique dans un tableau
int rechercheDichotomique(int taille, int pTab[], int valeur){
    int i=0;
    int milieu = 0;
    int debut = 0;
    int fin = taille-1;
    int resultat = -1;
    while (debut <= fin && resultat == -1)
    {
        milieu = (fin + debut)/2;
        if (valeur == pTab[milieu])
        {
            resultat = milieu;
        }
        else if (valeur < pTab[milieu])
        {
            fin = milieu - 1;
        }
        else
        {
            debut = milieu + 1;
        }
    }
    return resultat;
}
//recherche dichotomique recursif
int rechercheDichotomiqueRecursif(int taille, int pTab[], int valeur, int debut, int fin){
    int milieu = 0;
    int resultat = -1;
    if (debut <= fin)
    {
        milieu = (fin + debut)/2;
        if (valeur == pTab[milieu])
        {
            resultat = milieu;
        }
        else if (valeur < pTab[milieu])
        {
            resultat = rechercheDichotomiqueRecursif(taille, pTab, valeur, debut, milieu-1);
        }
        else
        {
            resultat = rechercheDichotomiqueRecursif(taille, pTab, valeur, milieu+1, fin);
        }
    }
    return resultat;
}

int main()
{
    printf("les tableau\n");

    int tab[3] = {10,11,13};

    int tab3[5];

    int tableau[4];
    tableau[0] = 10;
    tableau[1] = 23;
    tableau[2] = 505;
    tableau[3] = 8;

    int tab4[4] = {10, 23}; // Valeurs insérées : 10, 23, 0, 0

    int tab5[] = {12, 19, 18, 2}; //le compilateur comprend que c'est un tableau a 4 case

    //tab contien l'adresse de la premiere case
    char tab2[3] = {'A','B','C'};

    int tab6[14] = {10,11,13,14,15,16,17,18,19,20,21,22,23,24};


    printf("tab : la  2 eme case (11) : %d\n", tab[1]);
    printf("tableau : moyenne : %d\n", moyenne(4, tableau));
    printf("tab : pointeur ver la premiere case du tableau : %p\n", tab);
    printf("tab : valeur pointé vers la premiere valeur du tableau : %d\n", *tab);
    printf("tab : valeur pointé vers la seconde valeur du tableau : %d\n", *(tab +1));
    printf("tab2 :la  2 eme case (11) : %d\n", tab2[1]);
    printf("tab3 length : %ld\n", sizeof(tab3)/sizeof(tab3[0])); // sizeof(tab3)/sizeof(tab3[0])  taille du tableau
    

    afficheTab(3, tab);

    int i=0;
    do{
        tab3[i] = i;
        i++;
    }while (i != sizeof(tab3)/sizeof(tab3[0])+1);
    i=0;
    do{
        printf("%d\n", tab3[i]);
        i++;
    }while (i != sizeof(tab3)/sizeof(tab3[0])+1);

    i=0;
    
    for (i = 0 ; i < 4 ; i++)
    {
        printf("tableau %d\n", tableau[i]);
    }
    
    printf("recherche dichotomique : %d\n", rechercheDichotomique(14, tab6, 15));
    printf("recherche dichotomique recurcif : %d\n", rechercheDichotomiqueRecursif(14, tab6, 15));
    

    return 0;
}


