main: main.c countspace.h lib/libmy.a
	gcc main.c -o main -L lib -lmy

lib/libmy.a: lib countspace.o
	ar r lib/libmy.a countspace.o
	rm countspace.o

lib:
	mkdir lib
	
countspace.o: countspace.c
	gcc countspace.c -c

clean:
	rm main -r lib