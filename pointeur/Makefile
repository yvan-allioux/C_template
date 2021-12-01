main: main.o
	gcc -g -O0 main.o -o main

#enleve les optimisation du compilateur 
#ajoute les simbole du debugage
main.o: main.c
	gcc -g -O0 -c -o main.o main.c

clean :
	rm*.o