all: main.exe

main.exe: main.o temp_functions.o
	gcc main.o temp_functions.o -o main.exe

main.o: main.c temp_functions.h
	gcc -c main.c -o main.o

temp_functions.o: temp_functions.c temp_functions.h
	gcc -c temp_functions.c -o temp_functions.o