#include <iostream>
#include <algorithm>

int main() {
	
	unsigned int numPermutation = 1000000;
	std::string w = "0123456789";
	
	while( --numPermutation )
		std::next_permutation( w.begin(), w.end() );
	
	std::cout << w << std::endl;
}
