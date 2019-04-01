#ifndef ALUMNO
#define ALUMNO

#include "functions.h"

#define NSIZE 12 // Name size
#define MSIZE 15 // Major size

typedef struct Alumno {
	char nombre[NSIZE + 1];
	char apPaterno[NSIZE + 1];
	char apMaterno[NSIZE + 1];
	char carrera[MSIZE + 1];
	
	Alumno() :
		nombre{},
		apPaterno{},
		apMaterno{},
		carrera{}
	{}
		
	Alumno(const Alumno& a) :
		nombre{},
		apPaterno{},
		apMaterno{},
		carrera{}
	{
		strcpy(this->nombre, a.nombre);
		strcpy(this->apPaterno, a.apPaterno);
		strcpy(this->apMaterno, a.apMaterno);
		strcpy(this->carrera, a.carrera);
	}
} Alumno;

#endif
