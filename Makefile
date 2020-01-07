all: clean build

build:
	gcc -o modulo modulo.c -Wall -O2 -g

clean:
	rm -f modulo

run:
	./modulo  
