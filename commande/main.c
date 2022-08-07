#include <stdio.h>
#include <stdlib.h>

int system(const char *command);

int main()
{
    printf("hello world !\n");

    system("echo \"test\" >> test.txt");


    return 0;//0 success, 1 (ou any non-0) failure
}
