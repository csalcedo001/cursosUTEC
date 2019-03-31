#ifndef AULA
#define AULA

#include <fstream>
#include <iostream>

#include "alumno.h"

#define FNSIZE 100 // Filename size

class Aula {
	char filename[FNSIZE + 1];
	
	public:
	Aula(std::string s) : filename{} {
		strcpy(filename, s.c_str());
		
		std::ifstream file(filename);
		
		char l[16] = {};
		
		file.read(l, 15);
		
		std::cout << l << std::endl;
		
		file.close();
	}
	
	Alumno* load();
	bool add(Alumno a);
	bool del(int pos);
};

#endif
