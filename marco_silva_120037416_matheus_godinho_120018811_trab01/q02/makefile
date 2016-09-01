CC=gcc
CFLAGS=-I.
DEPS = ascending.h descending.h

%.o: %.c $(DEPS)
			$(CC) -c -o $@ $< $(CFLAGS)

main: main.o ascending.o descending.o
			gcc -o main main.o ascending.o descending.o -I.
