#include "num-00004.hpp"

uint32_t finder :: biggestPalindromic(){

	uint32_t ans, backF, backS;
	first = 1;
	second = 1;
	
	maxPalindromic = 0;

	do{
	
		ans = first * second;
		if (isPalindromic(ans)){
		
			if (ans > maxPalindromic){
				maxPalindromic = ans;
				backF = first;
				backS = second;
			}
		
		}
		
			second++;
			if (second >= 999){
				first++;
				second = 1;
			}
	
		std::cout << "F: " << first << "    S: " << second << "    New Candidate: " << maxPalindromic << '\r';
	
	}while(first < 999);

	std::cout << std::endl << "F: " << backF << "    S: " << backS << "    New Candidate: " << maxPalindromic << '\n';
}

bool finder :: isPalindromic(uint32_t num){

	std::string original_str = std::to_string(num);
	std::string reversed_str = reverse(original_str);
	std::stringstream change(reversed_str);
	uint32_t reversed_num;
	change >> reversed_num;

	if (num == reversed_num)
		return true;
	
	return false;
}

std::string finder :: reverse(std::string ori_str){

	//std::cout << ori_str << std::endl;
	std::string str = "";
	for(uint32_t len = ori_str.length(); len>0; len--){
	
		str += ori_str[len-1];
	
	}

	return str;

}
