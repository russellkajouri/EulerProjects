
/*
 
   the 11th code of the Euler Projects
   Created by : Kajo | rasoulkajouri@gmail.com
    
   Copy lefts | All lefts reserverd

   CPP files of the 11th problem

 */

// ========================================================
// Libraries

#include "num-00011.hpp"

// ========================================================
// CPP body

ifstream in;

void computer :: initialize(){

	bool check = false;

	do{
		
		// to display error when the file dose not exist or whatever
		if(check) std::cout << HTAB << "Error, Unable to find file...\n";

		// to catch the name of file
		std::cout << HTAB << "Enter the name of input file, <default:input.txt> :: ";
		getline(std::cin, nameOfinputFile);

		// to check with default
		if(nameOfInputFile == "")
			nameOfInputFile = "input.txt";

		in.open(nameOfInputFile, ios::in);
		check = true;

	}while(in.is_open());

	// to display the message and trunc the buffer
	std::cout << HTAB << "The file is found!" << std::endl;

}

