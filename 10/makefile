main: main.cpp matrix.o lib/libmy.a
	g++ main.cpp -o main -L lib -lmy

lib/libmy.a: lib matrix.o
	ar r lib/libmy.a matrix.o
	rm matrix.o

lib:	
	mkdir lib

matrix.o: matrix.cpp	
	g++ matrix.cpp -c

clean:
	rm main -r lib