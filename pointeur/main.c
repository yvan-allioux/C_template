#include <string.h>
#include <assert.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
    printf("hello world !\n");
    int i = 65;
    int a = 0;
    //pointeur, variable contenant l'adresse de i et qui a pour format un int
    char *i;
    printf('%c\n', i);
    //connaître l'adresse d'une variable
    //printf("%p\n", &i);
    return 0;
}
