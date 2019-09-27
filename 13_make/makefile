all: main.o funx.o
	gcc -o prog main.o funx.o

main.o: main.c funx.h
	gcc -c main.c

funx.o: funx.c funx.h
	gcc -c funx.c
