main: main.cpp linkedlist.o ListIterator.o Bild.o Audio.o Medium.o lib/libmy.a
	g++ main.cpp -o main -L lib -lmy

lib/libmy.a: lib linkedlist.o ListIterator.o
	ar r lib/libmy.a linkedlist.o ListIterator.o
	rm linkedlist.o ListIterator.o Bild.o Audio.o Medium.o

lib:	
	mkdir lib

Bild.o: Medien/Bild.cpp	
	g++ Medien/Bild.cpp -c

Audio.o: Medien/Audio.cpp	
	g++ Medien/Audio.cpp -c

Medium.o: Medien/Medium.cpp	
	g++ Medien/Medium.cpp -c

ListIterator.o: ListIterator.cpp
	g++ ListIterator.cpp -c

linkedlist.o: linkedlist.cpp	
	g++ linkedlist.cpp -c

clean:
	rm main -r lib