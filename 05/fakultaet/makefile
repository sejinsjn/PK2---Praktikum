main: main.c fakultaet.c lib/libmy.a
	gcc main.c -o main -L lib -lmy

lib/libmy.a: fakultaet.o lib
	ar r lib/libmy.a fakultaet.o
	rm fakultaet.o

lib:
	mkdir lib

fakultaet.o: fakultaet.c
	gcc fakultaet.c -c

clean:
	rm main -r lib