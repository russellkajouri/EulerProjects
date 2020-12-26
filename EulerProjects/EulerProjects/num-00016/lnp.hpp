#ifndef NUM_16_HPP
#define NUM_16_HPP


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


// to create the namespace of the long numbers
// package which calculates basical math's problems

class computer{


	private:
		int len;
		std::vector <short> number;

	public:
		int counter(int);
		std::vector <short> split(int);
		std::vector <short> multiplication(std::vector<short>, std::vector<short>);
		std::vector <short> pow(int, int);
		std::vector <short> show(std::vector<short>);



};

// ----------------------------------------------
// counter function to count the number's size

int computer :: counter(int num){
	int l = 0;
	while(num != 0 && ++l)
		num /= 10;
	return l;
}

// ----------------------------------------------
// to split the number into short-type vector cells

std::vector <short> computer :: split(int num){
	std::vector <short> num_vec;
	do{
		num_vec.push_back(num%10);
		num/=10;
	}while(num!=0);

	return num_vec;
}

// ----------------------------------------------
// to find the multiple of two vectors
std::vector <short> computer :: multiplication(std::vector <short> arr_one, 
		std::vector <short> arr_two){

	std::vector <short> ans( (arr_one.size() > arr_two.size()? arr_one.size(): arr_two.size()) ,0);
	short current;
	for(auto i = 0; i < arr_one.size(); ++i){
		auto c = i;
		for(auto j = 0; j < arr_two.size(); ++j, c++){
			
			current = arr_one[i] * arr_two[j];

			//std::cout << current << std::endl;
			//std::cout << arr_one[i] <<" -> " << arr_two[j] << std::endl;

			ans[c] += current % 10;

			if(current > 9){
				if(c+1 >= ans.size())
					ans.push_back(current/10);
				else
					ans[c+1] += current/10;
			}
			if(ans[c] > 9){
				if(c+1 >= ans.size())
					ans.push_back(ans[c]/10);
				else
					ans[c+1] += ans[c]/10;
				ans[c] %= 10;
			}

			//std::cout << "c: " << c << std::endl;
			//std::cout << "c: " << ans[c] << " c+1: " << ans[c+1] << std::endl;

		}
	}
	
	//std::cout << "size: " << ans.size() << std::endl;
	return ans;

}

// ----------------------------------------------
// to show the vector into the sensible form for human
std::vector <short> computer :: show(std::vector <short> arr){
	std::reverse(arr.begin(),arr.end());
	return arr;
}

// ----------------------------------------------
// pow function to calculate the pow's value

std::vector <short> computer :: pow(int base, int exponent){

	// TODO for exp 0 1 -1
	if(exponent == 0)

	len = this -> counter(base);
	number = this -> split(base);

	
	std::vector <short> b = this -> multiplication(n,n);
	return number ;

}
#endif // NUM_16_HPP
