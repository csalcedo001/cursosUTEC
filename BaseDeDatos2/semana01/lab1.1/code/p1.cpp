#include <iostream>

#include "aula.h"
#include "alumno.h"

using namespace std;

int main (void) {
	Aula aula("datos.txt");
	
	std::vector<Alumno> alumnos = aula.load();
	
	for (auto a : alumnos) {
		std::cout << a.nombre << std::endl;
		std::cout << a.apPaterno << std::endl;
		std::cout << a.apMaterno << std::endl;
		std::cout << a.carrera << std::endl;
	}
	
	return 0;
}
