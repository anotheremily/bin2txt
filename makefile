bin2txt	: driver.o convert.o
	gcc -lm -o bin2txt driver.o convert.o
driver.o : driver.c
	gcc -c driver.c
convert.o : convert.c
	gcc -c convert.c
clean:
	rm -f bin2txt driver.o convert.o
