
/*
 
   the 13th code of the Euler Projects
   Created by : Kajo | rasoulkajouri@gmail.com
    
   Copy lefts | All lefts reserverd

   CPP files of the 13th problem

 */

// ========================================================
// Libraries

#include "num-00013.hpp"

// ========================================================
// CPP body

std :: ifstream in;

void computer :: initializer(){

	bool check = false;

	do{
		// to clear the screen
		while(system("clear"));

		// to display error when the file dose not exist or whatever
		if(check) std::cout << HTAB << "Error, Unable to find file...\n";

		// to catch the name of file
		std::cout << HTAB << "Enter the name of input file, <default:input.txt | Press Enter> :: ";
		getline(std::cin, nameOfInputFile);

		// to check with default
		if(nameOfInputFile == "")
			nameOfInputFile = "input.txt";

		in.open(nameOfInputFile, std::ios::in);
		check = true;

	}while(!in.is_open());

	// to display the message and trunc the buffer
	std::cout << HTAB << "The file is found!" << std::endl;

	// ---------------------------------------------------------------------


	rows = 0; clmns = 0;
	std::string line, nums;

	// to find number of lines
	while(getline(in, line)){
		
		std::cout << HTAB << GRN << line << '\n';

		// to find the number of clmn, once 
		if(check){
			std::stringstream ss(line);
			while(getline(ss, nums, ' '))
				clmns++;
			
			check = false;
		}
		
		rows++;
	}


	// to create the array by pointer
	arr = new int *[rows];
	for(int i = 0; i<rows; i++)
		arr[i] = new int [clmns];


	// to return to the begging of the file
	in.clear();
	in.seekg(0, std::ios::beg);

	// to fill the poiter-array by data
	line = ""; nums = "";
	int row = 0, clmn;

	while(getline(in, line)){
		clmn = 0;
		
		std::stringstream ss(line);
		while(getline(ss, nums, ' ')){
			arr[row][clmn] = stoi(nums);
			clmn++;	
		}

		row++;
	}
	

	std::cout << RED << HTAB << \
		"Matrix has been filled..." << CYN << std::endl;
	std::cout << CYN << HTAB << "Rows: " <<\
		rows << " | Columns: " << clmns << DFT << '\n';

}

