#include <stdio.h>
#include "boolean.h"

int main()
{
    printf("les structure\n");
    
    //declaration
    BOOLEAN b1,b2;

    //initialisation
    b1 = VRAI;
    b2 = FAUX;

    if (b2 == FAUX){
        printf("b2 == FAUX\n");
    }else{
        printf("b2 == VRAI\n");
    }

    if (b1 == FAUX){
        printf("b2 == FAUX\n");
    }else{
        printf("b2 == VRAI\n");
    }
    
    return 0;
}
