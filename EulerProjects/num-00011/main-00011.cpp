/*
 
   the 11th code of the Euler Projects
   Created by : Kajo | rasoulkajouri@gmail.com
    
   Copy lefts | All lefts reserverd

   main file of the first problem

*/

// =======================================================-
// Libraries

#include "num-00011.hpp"

// =======================================================-
// main function

computer finder;

int main(){

	finder.initializer();
	finder.showMatrix();
	int ans = finder.multiplication(3);

	std::cout << HTAB "The biggest product is: " << ans << ".\n";

	return 0;
}

// =======================================================-
