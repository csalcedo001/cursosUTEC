all: run

main.o: main.cpp alumno.h aula.h
	g++ -std=c++17 $< -o $@

run: main.o
	./main.o
