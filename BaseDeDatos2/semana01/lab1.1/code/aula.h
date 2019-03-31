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
	
	void load() {
		std::ifstream file(filename);
		
		int size = this->size();
		
		Alumno a[size];
		
		int pos = 0;
		
		do {
			file.read(a[pos].nombre, 12);
			file.read(a[pos].apPaterno, 12);
			file.read(a[pos].apMaterno, 12);
			file.read(a[pos].carrera, 15);
			file.seekg(2, std::ios::cur);
			
			++pos;
		} while (pos < size);
		
		std::cout << a[0].nombre << std::endl;
		std::cout << a[0].apPaterno << std::endl;
		std::cout << a[0].apMaterno << std::endl;
		std::cout << a[0].carrera << std::endl;
		
		std::cout << a[1].nombre << std::endl;
		std::cout << a[1].apPaterno << std::endl;
		std::cout << a[1].apMaterno << std::endl;
		std::cout << a[1].carrera << std::endl;
		
		std::cout << a[2].nombre << std::endl;
		std::cout << a[2].apPaterno << std::endl;
		std::cout << a[2].apMaterno << std::endl;
		std::cout << a[2].carrera << std::endl;
		
		
		file.close();
	}
	
	bool add(Alumno a);
	bool del(int pos);
};

#endif
