#include "num-00016.hpp"
#include <iostream>

int main(){


	std :: string numb;
	std :: cin >> numb;

	lnp :: strnum num;
	unsigned short * ans = num.stoa();


	for(unsigned int i=0; i < num.strlength(); i++)
		std :: cout << ans[i];

	std::cout << std::endl;
	return 0;

}
