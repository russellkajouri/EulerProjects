#ifndef NUM_00003_HPP
#define NUM_00003_HPP

// ========================================================
// Libraries

#include <algorithm>
#include <iostream>
#include <cstdint>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>


#define HTAB "    "

// ========================================================
// Class Body

class finder{

	public:
		bool isPrime(uint64_t);
		void question();
		void listPrimesUpTo(uint64_t, bool);
		void primeFactors(uint64_t);

	private:
		uint64_t primeCandidate;
		std::vector <uint64_t> primeList;


};
#endif // NUM_00003_HPP
