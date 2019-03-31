#include <iostream>
#include <fstream>

#include "aula.h"
#include "alumno.h"

using namespace std;

int main (void) {
	Aula aula("datos.txt");
	
	aula.load();
	
	return 0;
}
