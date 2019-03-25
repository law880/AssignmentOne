//function implementation
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

//define structs
struct Animal {
	std::string name;
	std::string type;
	std::string regNo;
	int problem;
};

struct Vet {
	std::string name;
	double quality;
};

struct Problem {
	std::string name;
	double determinationComplexity;
	double treatmentComplexity;
	std::string treatment;
};

struct Treatment {
	std::string name;

};

int readInputFiles(char* files[])
{
	std::cout << "Called function readInputFiles()" << std::endl;
	std::ifstream in;
	
	in.open(files[0]);
	if(in.bad()) return -1;
	if(in.eof())  return -2;
	if(in.fail()) return -3;
	std::cout << "Successfully opened file" << std::endl;
	Animal a;
	//std::vector<Animal> animalList;
	//char animalStr[50];
	std::string name, type, regNo;
	int problem;
	//std::cout << animalStr << std::endl;
	in >> name >> type >> regNo >> problem;
	a.name = name;
	a.type = type;
	a.regNo = regNo;
	a.problem = problem;
	std::cout << a.name;
	//int animalCounter = 0;
/*	for(char c : animalStr) {
		in >> a.name >> a.type >> a.regNo >> a.problem;
		/*	a.name += c;
		}
		while(c != ':') {
			a.type += c;
		}
		while(c != ':')
			a.regNo += c;
		std::string problem = "";
		while( c != '.') 
			problem += c;
		a.problem = stoi(problem);
		animalList[animalCounter] = a;
		animalCounter++;
	}
	
	
	for(int i=0; i < animalList.size(); i++) {
		std::cout << animalList[i].name << std::endl;
		std::cout << animalList[i].type << std::endl;
		std::cout << animalList[i].regNo << std::endl;
		std::cout << animalList[i].problem << std::endl;
	
	}*/
	return 0;
	
}
