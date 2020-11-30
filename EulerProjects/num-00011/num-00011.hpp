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

// ========================================================
// Macros

#define HTAB "    "

// ========================================================
// Class's Body

class computer{

	public:
		// to begin the code
		void initializer();

	private:
		// create a 2d pointer 
		int **arr;
		// to store the name of input file
		std::string nameOfInputFile;
		// rows and columns of the input file
		int rows, clmns;

};

#endif // NUM_00011_HPP
