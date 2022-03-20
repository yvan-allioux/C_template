#include <stdio.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <stdlib.h>


/*
cecup 2 param en arc V1 cb decrivani

*/


int main(int argc, char *argv[])
{

	//verification des paramètre
	if (argc-1 != 2)
	{
		fprintf(stderr, "Usage parametre pas ok\n");
		exit(EXIT_FAILURE);
	}
	
	//conversion des caractere en int
	int param = atoi(argv[1]);
	int param2 = atoi(argv[2]);
	
    printf("okey - %d\n",param);
    printf("okey - %d\n",param2);
	
	return 0;
}
