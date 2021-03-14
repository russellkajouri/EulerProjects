#include <iostream>
#include <cmath>
int main(){

	unsigned long Candidate = 1;
	unsigned long SquareOfCandidate;
	unsigned int  Counter, CounterCopy;
	bool IsPrime;

	std::cout << "Which prime number do you want? ";
	std::cin >> Counter;
	CounterCopy = Counter;

	while(CounterCopy>0){
	
		IsPrime = true;
		SquareOfCandidate = sqrt(++Candidate) + 1;
		for (unsigned long C = 2; C < SquareOfCandidate; C++){
		
			if (Candidate % C == 0){
			
				IsPrime = false;
				break;
			
			}
		
		}
		
		if(IsPrime)
			CounterCopy--;
	}

	std::cout << Counter << "'s prime number is "
		<< Candidate << std::endl;

	return 0;	
}
