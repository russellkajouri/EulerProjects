#include "product.hpp"

short* Product(auto* a, auto la, auto* b, auto lb){

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

	return P;
}
