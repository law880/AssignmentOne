//driver file
#include <iostream>
#include "definitions.h"

int main(int argc, char* argv[]) {
	//check that there are 7 arguments (4 input files, 1 output file, limit)
	if(argc != 7)
	{
		std::cout << "Too few arguments. Please try again." << std::endl;
		return 0;
	}
	
	int limit;
	limit = *argv[1];
	
	//read files
	std::cout << "Calling readInputFiles()" << std::endl;
	readInputFiles(&argv[2]);
	
	return 0;
}
