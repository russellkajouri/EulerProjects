#include <iostream>
int main(){

	unsigned int Length = 100;
	unsigned int SumOfSquares = 0;
	unsigned int SquareOfSum = 0;

	while(Length > 0){

		SumOfSquares += Length * Length;
		SquareOfSum  += Length--;

	}


	SquareOfSum *= SquareOfSum;


	std::cout << "Sum of Squares: " << SumOfSquares << '\n' 
		<< "Square of Sum: " << SquareOfSum << std::endl;
	std::cout << "Subtraction: " << SquareOfSum -
		SumOfSquares << std::endl;

	return 0;
}
