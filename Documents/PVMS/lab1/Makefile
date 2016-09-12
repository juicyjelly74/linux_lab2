# Makefile for World project

main: libmain.o libhello.a libgoodbye.a
	gcc -o main libmain.o -L. -lhello -lgoodbye
launch:
	./main
libmain.o: libmain.c
	gcc -c libmain.c

libs: libhello.o libgoodbye.o
	ar cr libhello.a libhello.o
	ar cr libgoodbye.a libgoodbye.o

libhello.o: libhello.c
	gcc -c libhello.c

libgoodbye.o: libgoodbye.c
	gcc -c libgoodbye.c

clean:
	rm -f *.o *.a main