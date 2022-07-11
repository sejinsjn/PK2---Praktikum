main: main.cpp Medium.o Audio.o Bild.o lib/libmy.a
	g++ main.cpp -o main -L lib -lmy

lib/libmy.a: lib Medium.o Audio.o Bild.o
	ar r lib/libmy.a Medium.o Audio.o Bild.o
	rm Medium.o Audio.o Bild.o

lib:	
	mkdir lib

Bild.o: Bild.cpp	
	g++ Bild.cpp -c

Audio.o: Audio.cpp	
	g++ Audio.cpp -c

Medium.o: Medium.cpp	
	g++ Medium.cpp -c

clean:
	rm main -r lib