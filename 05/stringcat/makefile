main: main.c stringcat.h lib/libmy.a
	gcc main.c -o main -L lib -lmy

lib/libmy.a: lib stringcat.o
	ar r lib/libmy.a stringcat.o
	rm stringcat.o

lib:
	mkdir lib

stringcat.o: stringcat.c
	gcc stringcat.c -c

clean:
	rm main -r lib