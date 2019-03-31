#ifndef ALUMNO
#define ALUMNO

#define NSIZE 12 // Name size
#define MSIZE 15 // Major size

typedef struct Alumno {
	char nombre[NSIZE + 1];
	char apPaterno[NSIZE + 1];
	char apMaterno[NSIZE + 1];
	char carrera[MSIZE + 1];
	
	Alumno(
		// std::string nombre,
		// std::string apPaterno,
		// std::string apMaterno,
		// std::string carrera
	) :
		nombre{},
		apPaterno{},
		apMaterno{},
		carrera{}
	{
		// strcpy(this->nombre, nombre.c_str());
		// strcpy(this->apPaterno, apPaterno.c_str());
		// strcpy(this->apMaterno, apMaterno.c_str());
		// strcpy(this->carrera, carrera.c_str());
	}
	
	Alumno(const Alumno& a) {
		strcpy(this->nombre, a.nombre);
		strcpy(this->apPaterno, a.apPaterno);
		strcpy(this->apMaterno, a.apMaterno);
		strcpy(this->carrera, a.carrera);
	}
} Alumno;

#endif
