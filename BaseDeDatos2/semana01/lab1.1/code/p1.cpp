#include <iostream>

#include "aula.h"
#include "alumno.h"

using namespace std;

int main (void) {
	Aula aula("datos.txt");
	
	std::vector<Alumno> alumnos = aula.load();
	
	for (auto a : alumnos) {
		cout << "Nombre: " << a.nombre << endl;
		cout << "Apellido paterno: " << a.apPaterno << endl;
		cout << "Apellido materno: " << a.apMaterno << endl;
		cout << "Carrera: " << a.carrera << endl << endl;
	}
	
	Alumno a;
	
	a.update("Cesar", "Salcedo", "Castillo", "Computacion");
	
	aula.add(a);
	
	return 0;
}
