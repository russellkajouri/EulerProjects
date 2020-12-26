
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
		
		std::cout << HTAB << CYN << line << '\n';

		// to find the number of clmn, once 
		if(check){
			std::stringstream ss(line);
			while(getline(ss, nums, ' '))
				clmns++;
			
			check = false;
		}
		
		rows++;
	}

	// to come back the beginning of the file
	in.clear();
	in.seekg(0, std::ios::beg);


	// to create the array
	arr = new std::string * [rows];
	for(int i=0; i < rows; i++)
		arr[i] = new std::string[clmns];
	

	int row = 0, clmn;
	std::string l;

	while(getline(in, line)){
		clmn = 0;
		std::stringstream ss(line);
		while(getline(ss, l, ' ')){
			arr[row][clmn] = l;
			clmn++;
		}

		row++;
	}

	std::cout << RED << HTAB << \
		"Matrix has been filled..." << CYN << std::endl;
	std::cout << CYN << HTAB << "Rows: " <<\
		rows << " | Columns: " << clmns << DFT << '\n';

}


void computer :: convert(){

	// to find the string's leagth
	len = arr[0][0].length();
	
	// to create a new integer array
	nums = new int *[rows];
	for(int r = 0; r < rows; r++)
		nums[r] = new int [len];



	std::cout << RED << VTAB << HTAB \
		<< "The ultimate form of the file ..." \
		<< CYN << std::endl;


	for(int r = 0; r <rows; r++){
		for(int cl = 0; cl < clmns; cl++){

			
			std::cout << std::setw(4);
			std::cout << std::setfill(' ');
			std::cout << std::left;
			std::cout << r + 1;

			for(int l=0; l < len; l++){
				// to convert the character to integer
				nums[r][l] = arr[r][cl][l] - '0';
				std::cout << nums[r][l];
			}
			std::cout << std::endl;
		}
	}

	std::cout << DFT;

	for(int r = 0 ; r < rows; r++)
		delete [] arr[r];
	delete [] arr;

}



void computer :: swap(int a, int b){

	/**************************
	 * to swap two numbers
	 *
	 * A = A + B
	 * B = A - B
	 * A = A - B
	 *
	 **************************/


	for(int l=0; l < len; l++){
		
		nums[a][l] = nums[a][l] + nums[b][l];
		nums[b][l] = nums[a][l] - nums[b][l];
		nums[a][l] = nums[a][l] - nums[b][l];	
	}

}

void computer :: sort(){

	for(int r = 0; r < rows; r++){
		for(int r2 = r+1; r2 < rows; r2++){
		
			for(int l = 0; l < len; l++){
				
				if(nums[r][l] > nums[r2][l])
					break;
				else if(nums[r][l] < nums[r2][l]){
					//std::cout << RED << "swap: " << r << "," << r2 << CYN << '\n';
					this -> swap(r, r2);
					break;
				}
			}
		
		}
	
	}

	std::cout << VTAB << HTAB << RED \
		<< "The sorted file ...." << CYN << '\n';

	for(int r = 0; r <rows; r++){

			std::cout << std::setw(4);
			std::cout << std::setfill(' ');
			std::cout << std::left;
			std::cout << r + 1;

			for(int l=0; l < len; l++)
				std::cout << nums[r][l];

			std::cout << std::endl;
	}

	std::cout << DFT;

}


void computer :: summation (int *a, int *b, int* sum){


	for(int l = 0; l < len+1; l++)
		sum[l] = 0;


	for(int l = len - 1; l >= 0; l--){

		sum[l+1] += a[l] + b[l];

		//std::cout << a[l] << '-' << b[l] << '-' << sum[l+1] << '\t';

		if(sum[l+1] > 9){
		
			sum[l] = sum[l+1] / 10;
			sum[l+1] %= 10;
		
		}

		//std::cout << sum[l+1] <<'\n';
	}

}


void computer :: operation(){


	int *ans = new int [len+1];
	int *big_ans = new int [len+1];

	for(int r = 0; r < 10; r+=2){
	
		this -> summation(nums[r], nums[r+1], ans);

		this -> summation(ans, big_ans, big_ans);
	
	}

	std::cout << "ans: ";
	for(int i = 0; i < len+1; i++)
		std::cout << big_ans[i];
	std::cout <<std::endl;

}
