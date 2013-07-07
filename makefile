CC = gcc
CFLAGS = -ansi -Wall -pedantic

prog: teste.o Lista.o Item.o
	$(CC) $(CFLAGS) $^ -o $@
teste.o: teste.c Lista.h
	$(CC) $(CFLAGS) -c -g $< -o $@
Lista.o: Lista.c Lista.h
	$(CC) $(CFLAGS) -c $< -o $@
Item.o: Item.c Item.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o *.gch ~*

