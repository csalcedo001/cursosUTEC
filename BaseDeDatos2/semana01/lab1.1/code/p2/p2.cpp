#include <iostream>
#include <fstream>

#include "aula.h"
#include "alumno.h"

using namespace std;

int main (void) {
	fstream file("new.txt", ios::out);
	
	Aula aula("copiaDatos.txt");
	
	std::vector<Alumno> alumnos = aula.load();
	
	cout << "----------------------------------------" << endl;
	cout << "Lectura de datos previa a inserción" << endl;
	cout << "----------------------------------------" << endl;
	
	for (auto a : alumnos) {
		cout << "Nombre:           " << a.nombre << endl;
		cout << "Apellido paterno: " << a.apPaterno << endl;
		cout << "Apellido materno: " << a.apMaterno << endl;
		cout << "Carrera:          " << a.carrera << endl;
		cout << "---------------------------------" << endl;
	}
	
	cout << endl << endl;
	
	Alumno a;
	
	a.update("Cesar", "Salcedo", "Castillo", "Computacion");
	
	aula.add(a);
	
	file.write((const char *)& a, sizeof(a));

	file.close();
	
	
	alumnos = aula.load();
	
	cout << "----------------------------------------" << endl;
	cout << "Lectura de datos después de inserción" << endl;
	cout << "----------------------------------------" << endl;
	
	for (auto a : alumnos) {
		cout << "Nombre:           " << a.nombre << endl;
		cout << "Apellido paterno: " << a.apPaterno << endl;
		cout << "Apellido materno: " << a.apMaterno << endl;
		cout << "Carrera:          " << a.carrera << endl;
		cout << "---------------------------------" << endl;
	}
	
	return 0;
}
