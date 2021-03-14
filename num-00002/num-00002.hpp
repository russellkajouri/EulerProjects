/*
 
   the first code of the Euler Projects
   Created by : Kajo | rasoulkajouri@gmail.com
    
   Copy lefts | All lefts reserverd

   main file of the first problem

*/

// ========================================================
// Libraries

#include <iostream>
#include <vector>

// ========================================================
// Macros

#define HTAB "    "

// ========================================================
// Class Body

class fibonacci{

	public:
		void initializer();
		void calculator();
		void show();
		inline unsigned int sum(unsigned int, unsigned int);
		void evenFinder();


	private:
		// to store the series number
		std::vector <unsigned int> container;
		unsigned int num;

};

// --------------------------------------------------------

inline unsigned int fibonacci :: sum(unsigned int a, unsigned int b){
	return a+b;
}
// --------------------------------------------------------
