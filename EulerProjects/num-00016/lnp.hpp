#ifndef NUM_16_HPP
#define NUM_16_HPP


#include <iostream>
#include <string>
#include <stdexcept>


// to create the namespace of the long numbers
// package which calculates basical math's problems

namespace lnp{

	using std::cout;
	using std::cin;
	using std::endl;
	using std::cerr;

	#define HTAB "    "
	#define VTAB "\n\n"

	class strnum;
} 

class lnp :: strnum {

	private:
		unsigned short * str;
		unsigned int strlen = 0;
			
	public:
		strnum(std::string);
		strnum();
		// to convert string numbers
		unsigned short* stoa(std::string);
		unsigned short* stoa();
		unsigned int strlength();
	
};

// ----------------------------------------------------------------------------

lnp :: strnum :: strnum () { }
lnp :: strnum :: strnum(std::string numstr){
	strlen = numstr.length();
	str = new unsigned short [strlen];
	for(int b = 0; b < strlen; b++) str[b] = numstr[b] - '0';
}

// ----------------------------------------------------------------------------

unsigned short* lnp :: strnum :: stoa(){
	return strlen > 0 ? str : nullptr;
}
unsigned short* lnp :: strnum :: stoa(std::string numstr){
	strlen = numstr.length();
	str = new unsigned short [strlen];
	for(unsigned int b = 0; b < strlen; b++) str[b] = numstr[b] - '0';
	return str;
}

// ----------------------------------------------------------------------------

unsigned int lnp :: strnum :: strlength(){ return strlen > 0 ? strlen : 0; }
//unsigned int lnp :: strnum :: strlength(){}

#endif // NUM_16_HPP
