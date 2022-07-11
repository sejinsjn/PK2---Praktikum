main: main.cpp linkedlist.o lib/libmy.a
	g++ main.cpp -o main -L lib -lmy

lib/libmy.a: lib linkedlist.o
	ar r lib/libmy.a linkedlist.o
	rm linkedlist.o

lib:	
	mkdir lib

linkedlist.o: linkedlist.cpp	
	g++ linkedlist.cpp -c

clean:
	rm main -r lib