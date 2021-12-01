main: main.o
	@echo "==== Linking $@"
	gcc  -g -O0 -Wall -Werror -Wextra -Wconversion -ansi -Wpedantic -Wno-unused-parameter -std=gnu11 $^ -o $@

%.o: %.c
	@echo "==== Compiling $@"
	gcc  -g -O0 -Wall -Werror -Wextra -Wconversion -ansi -Wpedantic -Wno-unused-parameter -std=gnu11 -c $^ -o $@

clean:
	@echo "==== Clean all !"
	rm -f *.o main
