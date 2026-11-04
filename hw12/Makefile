all: main.exe

main.exe: main.o temp_api.o
	gcc main.o temp_api.o -o main.exe

main.o: main.c temp_api.h
	gcc -c main.c -o main.o

temp_api.o: temp_api.c temp_api.h
	gcc -c temp_api.c -o temp_api.o