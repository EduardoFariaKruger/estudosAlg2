# Makefile de exemplo (Manual do GNU Make)
     
CFLAGS = -Wall -g
CC = gcc

all: main.o ordenacao.o
	$(CC) -o main main.o ordenacao.o

ordenacao.o: ordenacao.c
	$(CC) -c $(CFLAGS) ordenacao.c

main.o: main.c
	$(CC) -c $(CFLAGS) main.c

clean:
	rm -f *.o *~ main
