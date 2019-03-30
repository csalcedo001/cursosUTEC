#ifndef AULA
#define AULA

#include "alumno.h"

class Aula {
	char filename[100];
	
	Alumno* load();
	bool add(Alumno a);
	bool del(int pos);
};

#endif
