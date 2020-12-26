#ifndef NUM_00004
#define NUM_00004


#include <iostream>
#include <sstream>
#include <string>
#include <cstdint>

class finder{

	public:
		uint32_t biggestPalindromic();
		bool isPalindromic(uint32_t);
		std::string reverse(std::string);

	private:
		uint32_t first, second;
		uint32_t maxPalindromic;

};


#endif // NUM_00004
