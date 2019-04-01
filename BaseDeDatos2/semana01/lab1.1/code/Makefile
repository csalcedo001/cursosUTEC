all: run

p1.o: p1.cpp alumno.h aula.h functions.h
	g++ -std=c++17 $< -o $@

run: p1.o
	./$<

clean: reset
	rm *.o

reset:
	cp datos.txt copiaDatos.txt
