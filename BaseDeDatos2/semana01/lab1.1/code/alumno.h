#ifndef ALUMNO
#define ALUMNO

#define NSIZE 12 // Name size
#define MSIZE 15 // Major size

typedef struct Alumno {
	char nombre[NSIZE + 1];
	char apPaterno[NSIZE + 1];
	char apMaterno[NSIZE + 1];
	char carrera[MSIZE + 1];
} Alumno;

#endif
