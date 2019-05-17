#ifndef AULA
#define AULA

#include <fstream>
#include <vector>
#include <iostream>

#include "alumno.h"

#define FNSIZE 100 // Filename size
#define RSIZE 60 // Register size

class Aula {
	char filename[FNSIZE + 1];
	
	public:
	Aula(std::string s) : filename{} {
		strcpy(this->filename, s.c_str());
	}
	
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
			
			file.read(a.nombre, NSIZE);
			file.read(a.apPaterno, NSIZE);
			file.read(a.apMaterno, NSIZE);
			file.read(a.carrera, MSIZE);
			file.seekg(1, std::ios::cur);
			
			alumnos.push_back(a);
		} while (++pos < size);
		
		file.close();
		
		return alumnos;
	}
	
	bool add(Alumno a) {
		std::fstream file(filename, std::ios::app);
			
		if (!file.is_open()) {
			return false;
		}
		
		// Write Alumno...
		
		setBackSpace(a.nombre, NSIZE);
		setBackSpace(a.apPaterno, NSIZE);
		setBackSpace(a.apMaterno, NSIZE);
		setBackSpace(a.carrera, MSIZE);
		
		file.write(a.nombre, NSIZE);
		file.write(a.apPaterno, NSIZE);
		file.write(a.apMaterno, NSIZE);
		file.write(a.carrera, MSIZE);
		file.write((const char*)& a.ciclo, sizeof(int));
		file.write((const char*)& a.mensualidad, sizeof(float));
		file.write((const char*)& a, sizeof(a));
		file.put('\n');
		
		file.close();
		
		return true;
	}
	bool del(int pos);
};

#endif
