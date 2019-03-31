#ifndef AULA
#define AULA

#include <fstream>
#include <vector>
#include <iostream>

#include "alumno.h"

#define FNSIZE 100 // Filename size
#define RSIZE 52 // Register size

class Aula {
	char filename[FNSIZE + 1];
	// std::fstream file;
	
	public:
	Aula(std::string s) : filename{} {
		strcpy(this->filename, s.c_str());
		// this->file.open(this->filename, std::ios::in| std::ios::out);
	}
	
	public:
	int size() const {
		std::ifstream file(this->filename);
		
		file.seekg(0, std::ios::end);
		int fileSize = file.tellg();	
		
		file.close();
		
		return fileSize;
	}
	
	void load() {
		std::ifstream file(filename);
		
		char s[13];
		s[12] = 0;
		
		Alumno a;
		
		file.read(a.nombre, 12);
		file.read(a.apPaterno, 12);
		file.read(a.apMaterno, 12);
		file.read(a.carrera, 15);
		file.seekg(1, std::ios::cur);
		
		std::cout << a.nombre << std::endl;
		std::cout << a.apPaterno << std::endl;
		std::cout << a.apMaterno << std::endl;
		std::cout << a.carrera << std::endl;
		
		
		file.close();
	}
	
	bool add(Alumno a);
	bool del(int pos);
};

#endif
