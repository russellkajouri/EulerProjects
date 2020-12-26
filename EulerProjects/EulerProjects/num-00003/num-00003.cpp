#include "num-00003.hpp"

bool finder :: isPrime(uint64_t num){

	uint64_t square = sqrt(num);
	for (uint64_t n = 2; n <= square; n++){
		if (num % n == 0){
			return false;
		}
	}

	return true;
}

void finder :: question(){

	system("clear");
	std::cout << HTAB << "*** W E L C O M E \u25Ca F I N D E R \n";

	std::cout << "Enter: "; 
	std::cin >> primeCandidate;

	//this -> listPrimesUpTo(primeCandidate, true);
	this -> primeFactors(primeCandidate);
}


void finder :: listPrimesUpTo(uint64_t num, bool permit){

	uint16_t len = std::to_string(num).length();
	uint8_t clmnCtrl = 0;
	for(uint64_t n = 2; n < num; n++){
		if (isPrime(n)){
			if (permit){
					
				std::cout.width(len+1); 
				std::cout << std::left << n  << " ";
				clmnCtrl++;
				
				if (clmnCtrl >= 10){
					std::cout << std::endl;
					clmnCtrl = 0;
				}
			}
			else{

				primeList.push_back(n);
			}
		}
	}
	
	std::cout<<std::endl;
}

// ------------------------------------------------------------------
void finder :: primeFactors(uint64_t candidate){

	
	if (isPrime(candidate)){
		std::cout << "The suggested number is a PRIME number," <<
			" so there are no prime factors" << std::endl;
	}
	else{

		decltype (candidate) half = candidate / 2 + 1;
		this -> listPrimesUpTo(half, false);

		// To print the primeList vetor's elements
		std::for_each(primeList.begin(), primeList.end(),[](const uint64_t num){std::cout << num << " ";});
		std::cout << std::endl;

		uint16_t len = primeList.size(), l;

		std::cout << "Prime factors: ";
		while ( l < len){
		
			if ( candidate % primeList[l] == 0){
				std::cout << primeList[l] << " ";
				std::cout << std::flush;
				candidate = candidate / primeList[l];
			}
			else{

				l++;
			}

		}
		std::cout << std::endl;
	}

}
