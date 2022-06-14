main: main.c dictionary/dictionary.h ../03/lib/libmy.a
	gcc main.c -o main -L../03/lib -lmy

../03/lib/libmy.a: ../03/lib dictionary.o
	ar r ../03/lib/libmy.a dictionary.o
	rm dictionary.o

../03/lib:
	mkdir ../03/lib
	
dictionary.o: dictionary/dictionary.c
	gcc dictionary/dictionary.c -c

clean:
	rm main -r ../03/lib