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
	int ciclo;
	float mensualidad;
	
	Alumno() :
		nombre{},
		apPaterno{},
		apMaterno{},
		carrera{},
		ciclo(0),
		mensualidad(0)
	{}
		
	Alumno(const Alumno& a) :
		nombre{},
		apPaterno{},
		apMaterno{},
		carrera{},
		ciclo(0),
		mensualidad(0)
	{
		strcpy(this->nombre, a.nombre);
		strcpy(this->apPaterno, a.apPaterno);
		strcpy(this->apMaterno, a.apMaterno);
		strcpy(this->carrera, a.carrera);
		
		this->ciclo = a.ciclo;
		this->mensualidad = a.mensualidad;
	}
	
	void update(
		std::string nombre,
		std::string apPaterno,
		std::string apMaterno,
		std::string carrera,
		int ciclo,
		float mensualidad,
	) {
		memset(this->nombre, ' ', NSIZE);
		memset(this->apPaterno, ' ', NSIZE);
		memset(this->apMaterno, ' ', NSIZE);
		memset(this->carrera, ' ', MSIZE);
		
		strcpy(this->nombre, nombre.c_str());
		strcpy(this->apPaterno, apPaterno.c_str());
		strcpy(this->apMaterno, apMaterno.c_str());
		strcpy(this->carrera, carrera.c_str());
		
		this->ciclo = ciclo;
		this->mensualidad = mensualidad;
	}
} Alumno;

#endif
