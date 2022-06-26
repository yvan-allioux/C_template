#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define LIMIT 500000


int main()
{
    clock_t begin = clock();

    int i = 3;//compteur

    while (i != LIMIT+1){
    //while (1){
        //printf("i %d", i);

        for(int j = 2; j < i; j++){
            //printf("- j %d ", j);
            if(i % j == 0){
                //printf("%d pas premier\n", i);
                break;
            }
            if(j == i-1){
                printf("%d est premier\n", i);
                //printf("premier");
            }
        }   

        i++;
    }

    clock_t end = clock();
    printf("Elapsed: %f seconds\n", (double)(begin - end) / CLOCKS_PER_SEC);

    return 0;//0 success, 1 (ou any non-0) failure
}
