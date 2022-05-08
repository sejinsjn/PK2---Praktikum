main: main.c ascii/ascii.h einmaleins/einmaleins.h binarycalc/binarycalc.h ../01/lib/libmy.a
	gcc main.c -o main -L../01/lib -lmy

../01/lib/libmy.a: ../01/lib ascii.o einmaleins.o binarycalc.o
	ar r ../01/lib/libmy.a ascii.o einmaleins.o binarycalc.o
	rm ascii.o einmaleins.o binarycalc.o

../01/lib:
	mkdir ../01/lib
	
ascii.o: ascii/ascii.c
	gcc ascii/ascii.c -c

einmaleins.o: einmaleins/einmaleins.c
	gcc einmaleins/einmaleins.c -c

binarycalc.o: binarycalc/binarycalc.c
	gcc binarycalc/binarycalc.c -c

clean:
	rm main -r ../01/lib