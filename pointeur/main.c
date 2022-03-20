#include <stdio.h>

int main()
{
    printf("les pointeurs\n");

    int i = 65;
    char monChar = i;

    //pointeur, variable contenant l'adresse de i et qui a pour format "pointeur"
    printf("valeur de i %d\n", i);
    printf("valeur du pointeur &i avec le parametre d'afichage \"p\" : %p\n", &i);
    //connaître l'adresse d'une variable
    //printf("%p\n", &i);

    //print d'un char
    printf("valeur de i %d\n", i);

    return 0;
}
