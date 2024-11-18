all: borrarMain lista lectura main borrarObjetos

borrarMain:
	rm -f main

borrarObjetos:
	rm -f *.o

main: main.c
	gcc main.c -o main lista.o lectura.o -Wall

lista: lista.c lista.h
	gcc -c lista.c -Wall

lectura: lectura.c lectura.h
	gcc -c lectura.c -Wall lista.o
