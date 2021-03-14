#ifndef NUM_16_HPP
#define NUM_16_HPP

#include <algorithm>
#include <cctype>
#include <cstdint>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

// to create the namespace of the long numbers
// package which calculates basical math's problems

class computer{

	private:
		std::vector<short> numbers;
		template<typename T>
		std::vector<short> positiveExponent(std::vector<short>,T);
		template<typename T>
		std::vector<short> negativeExponent(std::vector<short>,T);


	public:
		template<typename T>
		std::vector<short> pow(std::vector<short>,T);
		std::vector<short> split(std::string);
		std::vector<short> correction(std::vector<short>);
		std::vector<short> multiplication(
				std::vector<short>,
				std::vector<short>);

};

// ----------------------------------------------
// to split the input data

std::vector <short> computer::split(std::string str){

	std::vector<short> nums;
	for (int i = 0; i < str.size(); i++)
		if(isdigit(str[i])) nums.push_back(str[i]-48);
		else{std::cerr << "Non-digit character detected" << std::endl;
			abort();}
	return this->correction(nums);
}

// ----------------------------------------------
// to obtain multiplication of two arrays

std::vector<short> computer::multiplication(
		std::vector<short> arr_one,
		std::vector<short> arr_two){


	short current;
	std::vector<short> ans((arr_one.size()>arr_two.size()?arr_one.size():arr_two.size()),0);
	for(int i=0; i<arr_one.size(); i++){
		for(int j=0, c=i; j<arr_two.size(); j++,c++){

			current = arr_one[i] * arr_two[j];
			ans[c]+=current%10;
			if(current>9 or ans[c]>9){
				if(current>9 and c+1>=ans.size())
					ans.push_back(current/10);
				else
					ans[c+1]+=current/10;

				current = ans[c];
				ans[c]%=10;
				if(ans[c]>9 and c+1>=ans.size())
					ans.push_back(current/10);
				else
					ans[c+1]+=current/10;
			}
			/*	
			std::cout << arr_one[i] <<" -> "<< arr_two[j] << std::endl;
			std::cout <<"cur: " << current << std::endl;
			std::cout <<"C: "<<c<<std::endl;
			std::cout << ans.size() << std::endl;
			std::cout <<"c: "<<ans[c]<<" C+1: "<< ans[c+1]<<std::endl;*/
		}
	}
	//std::cout << ans.size() << std::endl;
	if(ans[ans.size()-1]==0) ans.pop_back();


	return this->correction(ans);
}

// ----------------------------------------------
// to writingCorrection the vector into human sensible form

std::vector<short> computer::correction(std::vector<short> vec){
	std::reverse(vec.begin(), vec.end());
	return vec;
}

// ----------------------------------------------
// to obtain the power of number by using special exponent

template<typename T>
std::vector<short> computer::pow(std::vector<short>base, T exponent){
	if(exponent>0)
		return positiveExponent(base, exponent);
	else if(exponent<0)
		return negativeExponent(base, exponent);
	else
		return {1};
}

// to obtain positive exponent

template<typename T>
std::vector<short> computer::positiveExponent(std::vector<short>base, T exp){
	std::vector<short> backUp=base;
	do{
		backUp = this->multiplication(backUp, base);
		backUp = this->correction(backUp);
	}while(--exp/2>=1);
	return this->correction(backUp);
}

// tp obtain negative exponent
template<typename T>
std::vector<short> computer::negativeExponent(std::vector<short>base, T exp){
	std::vector<short> backUp=base;
	return backUp;
}
#endif // NUM_16_HPP
