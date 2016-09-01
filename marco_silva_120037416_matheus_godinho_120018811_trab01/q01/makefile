CC=gcc
CFLAGS=-I.
DEPS = input_functions.h triangle_functions.h types.h

%.o: %.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

main: main.o input_functions.o triangle_functions.o
		gcc -o main main.o input_functions.o triangle_functions.o -I.
