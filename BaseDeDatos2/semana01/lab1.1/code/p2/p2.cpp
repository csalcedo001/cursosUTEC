#include <iostream>
#include <fstream>

#include "aula.h"
#include "alumno.h"

using namespace std;

int main (void) {
	Alumno a;
	
	a.update("Cesar", "Salcedo", "Castillo", "Computacion", 33 * 256 * 256 * 256 + 33 * 256 * 256 + 33 * 256 + 33, 2000);
	
	Aula c("new.txt");
	
	c.add(a);
	
	return 0;
}
