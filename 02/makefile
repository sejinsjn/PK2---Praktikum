main: main.c touppercase/touppercase.h upper/upper.h queue/queue.h ../02/lib/libmy.a
	gcc main.c -o main -L../02/lib -lmy

../02/lib/libmy.a: ../02/lib touppercase.o upper.o queue.o
	ar r ../02/lib/libmy.a touppercase.o upper.o queue.o
	rm touppercase.o upper.o

../02/lib:
	mkdir ../02/lib
	
touppercase.o: touppercase/touppercase.c
	gcc touppercase/touppercase.c -c

upper.o: upper/upper.c
	gcc upper/upper.c -c

queue.o: queue/queue.c
	gcc queue/queue.c -c

clean:
	rm main -r ../02/lib