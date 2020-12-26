/*
 
   the first code of the Euler Projects
   Created by : Kajo | rasoulkajouri@gmail.com
    
   Copy lefts | All lefts reserverd

   main file of the first problem

*/

// ========================================================
// Libraries

#include "num-00002.hpp"

// ========================================================
// CPP functions

void fibonacci :: initializer(){

	// as the first element
	container.push_back(1);
	// as the second element
	container.push_back(2);
	// to get the element number
	std::cout << HTAB << "*** How many elements do you want: ";
	std::cin >> num;

	this -> calculator();
	this -> show();
	this -> evenFinder();

}

// --------------------------------------------------------

void fibonacci :: calculator(){

	// we ignore two digit, cause
	// we stored it in our container
	num -= 2;

	do{
	
		unsigned int len = container.size();
		container.push_back( sum(container[len-2], container[len-1]) );

		num--;
	
	}while(num>0);

}

// --------------------------------------------------------

void fibonacci :: show(){

	unsigned int len = container.size();
	/*
	for (unsigned int o = 0; o < len; o++)
		std::cout << container[o] << " ";
	*/
	std::cout << HTAB << "*** "<< container[len-1] <<std::endl;

}

// --------------------------------------------------------

void fibonacci :: evenFinder(){

	unsigned int sum = 0;
	unsigned int len = container.size();
	for (unsigned int o=0; o < len; o++)
		if(container[o] % 2 == 0)
			sum += container[o];

	std::cout << HTAB << "*** Summation of even numbers is: "\
		<< sum << std::endl;
}
