#include <iostream>
#include <cmath>

int main(){

	unsigned long Length = 2E+6;
	unsigned long Sum = 0;
	bool IsPrime;


	std::cout << "Length: " << Length << std::endl;
	for (unsigned int l = 2; l < Length; l++){
	
		IsPrime = true;
		for (unsigned int m = 2; m <= sqrt(l); m++){

			if (l % m == 0){
			
				IsPrime = false;
				break;
			}
		}
		if(IsPrime){
		
			//std::cout << l << '\t';
			Sum += l;
		}
	}

	std::cout << "Sum: " << Sum << std::endl;
	return 0;
}
