main: main.cpp linkedlist.o ListIterator.o lib/libmy.a
	g++ main.cpp -o main -L lib -lmy

lib/libmy.a: lib linkedlist.o ListIterator.o
	ar r lib/libmy.a linkedlist.o ListIterator.o
	rm linkedlist.o ListIterator.o

lib:	
	mkdir lib

ListIterator.o: ListIterator.cpp
	g++ ListIterator.cpp -c

linkedlist.o: linkedlist.cpp	
	g++ linkedlist.cpp -c

clean:
	rm main -r lib