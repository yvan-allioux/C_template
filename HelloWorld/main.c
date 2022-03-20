#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int usleep(useconds_t useconds);

void cube(){
    const int MAX = 100, MIN = 1;
    int i = 0;
    while (i != 100)
    {
      
            int i2 = 0;
            while (i2 != i)
            {
                printf(" ");
                i2++;
            }

        
        printf("%d\n", i);
        //printf("data %d\n", i);
        usleep(10000);
        i++;
    }
    
}

int main()
{
    printf("hello world !\n");
    cube();

    return 0;//0 success, 1 (ou any non-0) failure
}
