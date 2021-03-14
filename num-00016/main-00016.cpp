#include "lnp.hpp"
#include <iostream>
#include <vector>
#include <cstddef>

int main(){

	computer finder;
	
	std::vector <short> vec;

	vec = finder.pow(finder.split("2"),1000);

	std::cout << "2^1000: ";
	for(int i=0;i<vec.size();i++)
		std::cout<<vec[i];
	std::cout<<std::endl;

	std::cout<<"sum: ";
	long sum=0;
	for(int i=0;i<vec.size();i++)
		sum+=vec[i];
	std::cout<<sum<<std::endl;
	return 0;

}
