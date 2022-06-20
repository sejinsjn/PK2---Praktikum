main: main.c min.o lib/libmy.a
	gcc main.c -o main -L lib -lmy

lib/libmy.a: lib min.o
	ar r lib/libmy.a min.o
	rm min.o

lib:	
	mkdir lib

min.o: min.c	
	gcc min.c -c

clean:
	rm main -r lib