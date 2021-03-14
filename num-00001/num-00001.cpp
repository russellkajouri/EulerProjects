/*
 
   the first code of the Euler Projects
   Created by : Kajo | rasoulkajouri@gmail.com
    
   Copy lefts | All lefts reserverd

   cpp files of the first problem

 */

// ========================================================
// Libraries

#include "num-00001.hpp"

// ========================================================
// CPP body

void computer :: initializer(){

	std::cout << HTAB << "*** The First Euler Projects" << '\n';
	std::cout << HTAB << "*** Enter the number : ";
	std::cin >> num;


	this -> findMultipliers();
	this -> sum();

}

// --------------------------------------------------------

void computer :: findMultipliers(){

	do{
		// to move to next step
		num--;


		// to check the question's term
		if (num % 3 == 0 || num % 5 == 0)
		{
			multipliers.push_back(num);
			//std::cout << num << '\n';
		}
		
	}while(num>0);
}

// --------------------------------------------------------

void computer :: sum(){

	sumTotal = 0;
	//  to find the vetor's length
	unsigned int len = multipliers.size();

	for(num = 0; num < len; num++)
		sumTotal += multipliers[num];

	std::cout << HTAB << "*** the sum total is : " << \
		sumTotal << std::endl;
}

// ========================================================
