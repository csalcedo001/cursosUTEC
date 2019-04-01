all: run

p2.o: p2.cpp alumno.h aula.h functions.h
	g++ -std=c++17 $< -o $@

run: p2.o
	./$<

clean: reset
	rm *.o

reset:
	cp datos.txt copiaDatos.txt
