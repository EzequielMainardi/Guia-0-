all: guia0

guia0: guia0.o
			gcc -Wall -Wextra -pedantic guia0.o -o guia0

guia0.o: guia0.c 
			gcc -Wall -Wextra -pedantic -c guia0.c -o guia0.o 

clean: 
			rm *.o guia0

.PHONY: all clean