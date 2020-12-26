/*
 
   the 11th code of the Euler Projects
   Created by : Kajo | rasoulkajouri@gmail.com
    
   Copy lefts | All lefts reserverd

   header file of the first problem

 */

#ifndef NUM_00011_HPP
#define NUM_00011_HPP

// ========================================================
// Libraries

#include <sstream>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

// ========================================================
// Macros

#define HTAB "    "
#define RED  "\033[31m"
#define GRN  "\033[32m"
#define CYN  "\033[36m"
#define DFT  "\033[39m"

// ========================================================
// Class's Body

class computer{

	public:
		// to begin the code
		void initializer();
		void showMatrix();

		int multiplication(int); 

	private:
		// create a 2d pointer 
		int **arr;
		// to store the name of input file
		std::string nameOfInputFile;
		// rows and columns of the input file
		int rows, clmns;

		int best;

};

#endif // NUM_00011_HPP
