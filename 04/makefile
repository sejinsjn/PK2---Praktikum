main: main.c dictionary/dictionary.h ../04/lib/libmy.a
	gcc main.c -o main -L../04/lib -lmy

../04/lib/libmy.a: ../04/lib dictionary.o
	ar r ../04/lib/libmy.a dictionary.o
	rm dictionary.o

../04/lib:
	mkdir ../04/lib
	
dictionary.o: dictionary/dictionary.c
	gcc dictionary/dictionary.c -c

clean:
	rm main -r ../04/lib