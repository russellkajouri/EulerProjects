/*
 
   the 13th code of the Euler Projects
   Created by : Kajo | rasoulkajouri@gmail.com
    
   Copy lefts | All lefts reserverd

   header file of the 13th problem

 */

#ifndef NUM_00013_HPP
#define NUM_00013_HPP

// ========================================================
// Libraries

#include <sstream>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <array>


// ========================================================
// Macros


#define HTAB "    "
#define VTAB "\n\n"
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
		void convert();
		void swap(int, int);
		void sort();
		void operation();
		void summation(int*, int*, int*);

	private:
		// create a 2d pointer 
		std::string **arr;
		int **nums;
		// to store the name of input file
		std::string nameOfInputFile;
		// rows and columns of the input file
		int rows, clmns, len;

};

#endif // NUM_00013_HPP
