All: main

main: main.o student.o
	gcc main.o student.o -o main

.SUFFIXES: .o .c

.c.o:
	gcc -c $*.c -Wall -O2 -ansi

order:
	rm -f *.o

clean: order
	rm -f main
