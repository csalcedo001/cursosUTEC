#ifndef AULA
#define AULA

#include "alumno.h"

#define FNSIZE 100 // Filename size

class Aula {
	char filename[FNSIZE + 1];
	
	Aula(std::string s);
	 
	Alumno* load();
	bool add(Alumno a);
	bool del(int pos);
};

#endif
