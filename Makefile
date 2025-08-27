CC = gcc 
CFLAGS = -Wall -Wextra -pedantic
TARGET = guia0

all: $(TARGET)

guia0: guia0.o
			$(CC) $(CFLAGS) $^ -o $@

guia0.o: guia0.c 
			$(CC) $(CFLAGS) -c $< -o $@ 

clean: 
			rm *.o (TARGET)

.PHONY: all clean