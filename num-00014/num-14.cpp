#include <iostream>

void CollatzSeries(unsigned long N, unsigned long &L);
inline bool IsEven(unsigned long N);

int main(){

	unsigned long Number = 1E6+1, CN=0;
	unsigned long Length = 1, CL=0;

	while(--Number){

		Length = 1;
		CollatzSeries(Number, Length);
		if (Length > CL){
			CL = Length;
			CN = Number;
		}
		//std::cout << Number << '\n';
	}
	std::cout << CL << '\t' << CN << '\n';
	return 0;
}


inline bool IsEven(unsigned long N){
	return !(N % 2);
}


void CollatzSeries(unsigned long N, unsigned long &L){

	while(N > 1){
		L++;
		N = IsEven(N) ? N / 2 : 3 * N + 1;
	}
}

