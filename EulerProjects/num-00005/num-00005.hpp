#ifndef NUM_00005_HPP
#define NUM_00005_HPP

#include <iostream>
#include <cstdint>

class finder{

	public:
		bool isDivisible(uint64_t can, uint8_t div){
		
			if (can == 0 || div == 0)
				return false;
			
			decltype (div) num = 2;

			while (num <= div)
				if (can % num == 0)
					num++;
				else
					return false;

			return true;
		}


		uint64_t smallestDividendFind(uint8_t divisor){
		
			if(divisor == 0)
				return 0;

			counter = 1;
			while(!smallest_dividend){
			
				candidate = divisor * counter;
				if(isDivisible(candidate, divisor))
					smallest_dividend = candidate;
				else
					counter++;
			}

			return smallest_dividend;
		
		}
	private:

		uint64_t candidate;
		uint8_t divisor;
		uint64_t counter;
		uint64_t smallest_dividend = 0;




};

#endif 
