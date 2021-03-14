/*
 
   the first code of the Euler Projects
   Created by : Kajo | rasoulkajouri@gmail.com
    
   Copy lefts | All lefts reserverd

   header file of the first problem

 */

#ifndef NUM_00001_HPP
#define NUM_00001_HPP

// ========================================================
// Libraries

#include <iostream>
#include <vector>

// ========================================================
// Macros

#define HTAB "    "

// ========================================================
// Class's Body

class computer{

	public:
		// to begin the code
		void initializer();
		// to find the multipliers
		void findMultipliers();
		// to get the sum of multipliers
		void sum();

	private:
		// the given number
		unsigned int num;
		// the container to store the multipliers
		std::vector <unsigned int> multipliers;
		// to store the final value
		unsigned int sumTotal;

};

#endif // NUM_00001_HPP
