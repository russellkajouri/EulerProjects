#ifndef NUM_16_HPP
#define NUM_16_HPP


#include <iostream>
#include <string>


// to create the namespace of the long numbers
// package which calculates basical math's problems

class computer{


	private:
		short * arr1;
		short * arr2;

	public:
		int counter (short base){
			int n = 0;
			while(base != 0 && n++) base /= 10;
		}

		// --------------------------------------------
		void pow(short base, short pow){

			decltype(base) base2 = base;
			int size = this -> counter(base2);
			arr1 = new short [size];

			// -------------------------------

			for(int i = 0; i < size; i++){
				arr1[i] = base2 % 10;
				base2 /= 10;
			}
			
			arr2 = arr1;
			// -------------------------------

			short * ans;
			int size2 = 2 * size;
			for(short p = 1; p < pow; p++){
				ans = new short [size2];

				for(int i = 0; i <size; i++){
					for(int j = 0; j < size; j++){

						std::cout << arr1[i]  << '|' << arr2[j] << "|C: ";

						int current = arr1[i] * arr2[j];
						ans[i + j] += current % 10;

						if(current > 9) ans[i+j+1] = current / 10;

						std::cout << current << "|ansij"

					}
				}

			}
		
		} // end of pow func

};
#endif // NUM_16_HPP
