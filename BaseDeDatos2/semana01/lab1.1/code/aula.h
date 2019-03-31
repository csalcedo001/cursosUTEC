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
	}
	
	private:
	void read(int size, char *container) {
		std::ifstream file(filename);
		
		file.read(container, size);
		
		file.close();
	}
	
	public:
	void load() {
		int size = 15;
		
		char s[size + 1];
		s[size] = 0;
		
		this->read(size, s);
		
		std::cout << s << std::endl;
	}
	
	bool add(Alumno a);
	bool del(int pos);
};

#endif
