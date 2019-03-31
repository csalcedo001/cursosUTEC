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
		int fileSize = file.tellg() / (RSIZE + 1);
		
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
			
			file.read(a.nombre, 12);
			file.read(a.apPaterno, 12);
			file.read(a.apMaterno, 12);
			file.read(a.carrera, 15);
			file.seekg(2, std::ios::cur);
			
			alumnos.push_back(a);
		} while (++pos < size);
		
		file.close();
		
		return alumnos;
	}
	
	bool add(Alumno a);
	bool del(int pos);
};

#endif
