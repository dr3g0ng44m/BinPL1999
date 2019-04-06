all: test.o
	gcc -o test test.o -lpthread
test.o: test.c 	
	gcc -c test.c -lpthread
clean: 
	rm -f*.o test
