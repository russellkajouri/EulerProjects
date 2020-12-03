
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

std :: ifstream in;

void computer :: initializer(){

	bool check = false;

	do{
		// to clear the screen
		while(system("clear"));

		// to display error when the file dose not exist or whatever
		if(check) std::cout << HTAB << "Error, Unable to find file...\n";

		// to catch the name of file
		std::cout << HTAB << "Enter the name of input file, <default:input.txt> :: ";
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

// ----------------------------------------------------------------------------

void computer :: showMatrix(){

	for(int i = 0; i < rows; i++){
		
		std::cout << HTAB;
		for(int j = 0; j < clmns; j++){
			std::cout << std::setw(2) << arr[i][j] << ' ';
			std::cout.width(2);
		}
		
		std::cout << '\n';
	}
}

// ----------------------------------------------------------------------------

int computer :: multiplication(int num){


	best = 1;

	for(int r = 0; r < rows; r++){
		for(int cl = 0; cl < clmns; cl++){
	
			if(cl + num < clmns){
				int current = arr[r][cl] * arr[r][cl+1] * arr[r][cl+2] * arr[r][cl+3];
				if(current > best)
					best = current;
			}
				
			if(r + num < rows){
				int current = arr[r][cl] * arr[r+1][cl] * arr[r+2][cl] * arr[r+3][cl];
				if(current > best)
					best = current;
			}

			if(cl + num < clmns && r + num < rows){
				int current = arr[r][cl] * arr[r+1][cl+1] * arr[r+2][cl+2] * arr[r+3][cl+3];
				if(current > best)
					best = current;
			}

			if(r + num < rows && cl > 2){
				int current = arr[r][cl] * arr[r+1][cl-1] * arr[r+2][cl-2] * arr[r+3][cl-3];
				if(current > best)
					best = current;
			}
		}
	}

	return best;
}
