all: parse.o
	gcc -o parse parse.o

parse.o: parse.c parse.h
	gcc -c parse.c parse.h

clean:
	rm *.o
	rm *~

run:
	./parse
