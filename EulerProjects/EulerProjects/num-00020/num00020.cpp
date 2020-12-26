#include <iostream>
#include <climits>


//unsigned long long int Number;
//unsigned long long int GetValue();
//unsigned long long int FactorialOf(unsigned long long int);

short* Product(auto*, auto, auto*, auto, auto&);

int main(){

	short * A = new short [2];

	A[0] = 1;
	A[1] = 5;


	short * B = new short [2];

	B[0] = 1;
	B[1] = 7;

	short * C;
	int L;

	C = Product(A, 2, B, 2, L);

	
	for(int i=0; i<L; i++)
		std::cout << C[i];
	std::cout << std::endl;
	
	
	/*
	Number = GetValue();
	std::cout << "Factorial: " 
		<< FactorialOf(Number)
		<< std::endl;
	*/
	return 0;
}


short* Product(auto* a, auto la, auto* b, auto lb, auto& L){

	auto lp = la > lb ? la : lb;
	short * P = new short [++lp];

	short ans, quotient;

	for(auto l=0; l<la; l++){
		quotient = 0;
		for(auto k=0, h=l; k<lb; k++,h++){

			ans = a[l] * b[k];
			P[h] = quotient + ans % 10;

			quotient = int(ans / 10);
			
			if(P[h] > 9){
				
				short* PC = P;
				P = new short [++lp];

				for(int q=0; q < lp; q++)
					P[q] = PC[q];

				P[h] %= 10;
				P[h+1] = P[h] / 10;

				delete [] PC;
			}

		}
	}

	L = lp;
	return P;
}

/*
unsigned long long int GetValue(){
	while(true){
	
		std::cout << "Enter the number: ";
		std::cin >> Number;

		if(Number < ULLONG_MAX - 1)
			return Number;
		else
			std::cout << "It seems that ur number is incorrect.\n";
	}
}

unsigned long long int FactorialOf(unsigned long long int Number){

	if(Number == 1 || Number == 0)
		return 1;

	return Number * FactorialOf(Number - 1);
}
*/
