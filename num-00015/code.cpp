#include <iostream>
//#include "powerto.hpp"

int Length = 1;
short *Num, 
	  POW, 
	  BaseNum, 
	  Remain;

void Substitute(short*&, int, int&, short&);
void GetValues(short&, short&);
void ComputingCore();
void ArrayDisplay(short*, int);
//=============================================================================

int main(){

	Num = new short[Length];
	Num[0] = 1;

	GetValues(BaseNum, POW);
	ComputingCore();
	ArrayDisplay(Num, Length);

	return 0;
}


// ----------------------------------------------------------------------------

void Substitute(short * &N, int l, int &L, short &R){

	R = N[l] / 10;

	// the last element
	if(l == L - 1){
	
		short * CopyNum = N;
		N = new short [++L];

		for(int k = 0; k < L; k++)
			N[k] = CopyNum[k];

		N[l] %= 10;
		N[l+1] = 0;

		delete [] CopyNum;

	}
	else
		N[l] %= 10;

}


// ----------------------------------------------------------------------------

void GetValues(short &BaseNum, short& POW){

	std::cout<<"Enter the number: ";
	std::cin >> BaseNum;

	std::cout << "Enter the power digit: ";
	std::cin >> POW;

}

// ----------------------------------------------------------------------------

void ComputingCore(){


	for(short C = 0,Remain = 0; C < POW; C++){
		for(int L = 0; L < Length; L++){
		
			Num[L] *= BaseNum;
			Num[L] += Remain;
			Remain = 0;
			if (Num[L] > 9)
				Substitute(Num, L, Length, Remain);
		}
	}
}

// ----------------------------------------------------------------------------

void ArrayDisplay(short * Num, int Length){

	std::cout << Length << std::endl;
	while(Length--)
		std::cout << Num[Length];
	std::cout << std::endl;

}
