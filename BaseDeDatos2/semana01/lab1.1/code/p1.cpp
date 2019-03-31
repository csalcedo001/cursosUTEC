#include <iostream>

#include "aula.h"
#include "alumno.h"

using namespace std;

int main (void) {
	Aula aula("datos.txt");
	
	std::vector<Alumno> alumnos = aula.load();
	
	std::cout << alumnos[0].nombre << std::endl;
	std::cout << alumnos[0].apPaterno << std::endl;
	std::cout << alumnos[0].apMaterno << std::endl;
	std::cout << alumnos[0].carrera << std::endl;
	
	std::cout << alumnos[1].nombre << std::endl;
	std::cout << alumnos[1].apPaterno << std::endl;
	std::cout << alumnos[1].apMaterno << std::endl;
	std::cout << alumnos[1].carrera << std::endl;
	
	std::cout << alumnos[2].nombre << std::endl;
	std::cout << alumnos[2].apPaterno << std::endl;
	std::cout << alumnos[2].apMaterno << std::endl;
	std::cout << alumnos[2].carrera << std::endl;
	
	return 0;
}
