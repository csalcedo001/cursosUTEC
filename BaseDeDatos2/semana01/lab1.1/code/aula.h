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
	
	public:
	Aula(std::string s) : filename{} {
		strcpy(this->filename, s.c_str());
	}
	
	int size() const {
		std::ifstream file(this->filename);
		
		file.seekg(0, std::ios::end);
		int fileSize = file.tellg() / (RSIZE + 2);
		
		file.close();
		
		return fileSize;
	}
	
	std::vector<Alumno> load() {
		std::ifstream file(filename);
		
		int size = this->size();
		
		std::vector<Alumno> alumnos;
		
		int pos = 0;
		
		do {
			Alumno a;
			
			file.read(a.nombre, NSIZE);
			file.read(a.apPaterno, NSIZE);
			file.read(a.apMaterno, NSIZE);
			file.read(a.carrera, MSIZE);
			file.seekg(2, std::ios::cur);
		
			deleteBackSpaces(a.nombre, NSIZE);
			deleteBackSpaces(a.apPaterno, NSIZE);
			deleteBackSpaces(a.apMaterno, NSIZE);
			deleteBackSpaces(a.carrera, MSIZE);
			
			alumnos.push_back(a);
		} while (++pos < size);
		
		file.close();
		
		return alumnos;
	}
	
	bool add(Alumno a) {
		std::fstream file(filename);
			
		if (!file.is_open()) {
			return false;
		}
		
		// Write Alumno...
		
		std::cout << strlen(a.apPaterno) << std::endl;
		
		file.close();
		
		return true;
	}
	bool del(int pos);
};

#endif
