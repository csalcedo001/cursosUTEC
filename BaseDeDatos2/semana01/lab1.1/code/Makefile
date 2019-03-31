all: run

p1.o: p1.cpp alumno.h aula.h
	g++ -std=c++17 $< -o $@

run: p1.o
	./$<
