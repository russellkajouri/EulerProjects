#include <iostream>

int main(){

	std::cout << "Which Triangle Number do you want? ";
	unsigned long Num; std::cin >> Num;

	unsigned long list[Num]; 

	while (Num-- > 0){

		list[Num] = 0;
		for (unsigned long N = 1; N <= Num+1; N++)
			list[Num] += N;

		std::cout << list[Num] << ' ';
	
	}


	std::cout << std::endl;
	
/*
	for (unsigned long i = 0; i < sizeof(list)/sizeof(list[0]); i++)
		std::cout << list[i] << ' ';

	std::cout << std::endl;

*/

	return 0;
}
