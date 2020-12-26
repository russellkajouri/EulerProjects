#include "lnp.hpp"
#include <iostream>
#include <vector>

int main(){

	computer finder;

	//std::vector <short> ans = finder.pow(454578,2);


	std::vector <short> ans = finder.multiplication(finder.split(5),finder.split(50));
	ans = finder.show(ans);

	for(int i=0; i<ans.size(); i++)
		std::cout << ans[i];
	std::cout<<std::endl;
	return 0;

}
