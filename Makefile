all:
	gcc -c cube.c -I . -o cube.o
	gcc main.c cube.o -I . -lm -o cube.exe
	./cube.exe
build:
	gcc -c cube.c -I . -o cube.o
	gcc main.c cube.o -I . -lm -o cube.exe
run:
	./cube.exe
