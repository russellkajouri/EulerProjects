/* ******************************************************************
 * This code calculate the number of digit of the 100!
 * Author : KAJO
 * Address: kajothecoder@gmail.com
 * last modified : 14 Mar 2021
 * ******************************************************************/
// ******************************************************************
#include <iostream>
#include <climits>
#include <vector>
#include <cstdint>

// ****************8*************************************************
constexpr uint8_t ZERO = 0;
constexpr uint8_t ONE = 1;
constexpr uint8_t NINE = 9;
constexpr uint8_t TEN = 10;

// ******************************************************************
std::vector<uint8_t> Product(const std::vector<uint8_t>&,
		const std::vector<uint8_t>&);
std::vector<uint8_t> Splitter(unsigned int);
unsigned long long int Sum(std::vector<uint8_t>&);
std::vector<uint8_t> ZerosCounter(const std::vector<uint8_t>&);
// ******************************************************************
int main(){

	std::vector<uint8_t> C = {ONE};
	for(unsigned int num=2; num<101; num++)
		C = Product(Splitter(num), C);

	unsigned long long int answer = Sum(C);
	std::cout <<"# 100!: "<< answer << std::endl;



	return 0;
}
// ******************************************************************
std::vector<uint8_t> Product(const std::vector<uint8_t> &A, const std::vector<uint8_t> &B){
	std::vector<uint8_t> a = ZerosCounter(A);
	std::vector<uint8_t> b = ZerosCounter(B);
	unsigned int diff = A.size() - a.size();
	diff += B.size() - b.size();
/*
	for(auto &FF:b)
		std::cout << unsigned(FF);
	std::cout<<std::endl;

	for(auto &FF:a)
		std::cout << unsigned(FF);
	std::cout<<std::endl;
*/


	std::vector<uint8_t> P;
	P.resize(a.size()>b.size()?a.size():b.size(), ZERO);

	for(auto l=ZERO; l<a.size(); l++)
		for(auto k=ZERO, h=l; k<b.size(); k++,h++){

			P[h] += a[l] * b[k];

			if(P.size() <= h+ONE) P.push_back(ZERO);
			if(P[h] > NINE){
				P[h+ONE] += uint8_t(P[h] / TEN);
				P[h] %= TEN;
			}


		}

	while(diff--!=ZERO)
		P.insert(P.begin(), ZERO);

	while(true){
		if(P[P.size()-ONE] == ZERO)
			P.pop_back();
		else
			break;


	}

	return P;
}
// ******************************************************************
std::vector<uint8_t> Splitter(unsigned int number){
	std::vector<uint8_t>ans;
	while(number != ZERO){
		ans.push_back(number%TEN);
		number /= TEN;
	}
	return ans;
}
// ******************************************************************
unsigned long long int Sum(std::vector<uint8_t> &N){
	unsigned long long int ans = ZERO;
	for(long unsigned int C=ZERO; C<N.size(); C++)
		ans += unsigned(N[C]);
	return ans;
}
// ******************************************************************
std::vector<uint8_t> ZerosCounter(const std::vector<uint8_t> &a){
	long unsigned number_of_zero = ZERO;
	for(long unsigned int F=ZERO; F<a.size(); F++)
		if(a[F] == ZERO)
			number_of_zero++;
		else
			break;
	return std::vector<uint8_t>(a.begin()+number_of_zero, a.end());
}
