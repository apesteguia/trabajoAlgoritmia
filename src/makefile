all: borrarMain lista main borrarObjetos

borrarMain:
	rm -f main

borrarObjetos:
	rm -f *.o

main: main.c
	gcc main.c -o main lista.o -Wall

lista: lista.c lista.h
	gcc -c lista.c -Wall
