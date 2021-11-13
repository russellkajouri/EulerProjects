/* ********************************************************
 * Project numebr 23 Non - abundant sums
 * last modified : 20 May 2021
 * author : kajo
 *
 *
 * ********************************************************/

#include <iostream>
#include <vector>

constexpr unsigned long zero = 0;
constexpr unsigned long one  = 1;
constexpr unsigned long limit= 28123;



class compute{
	private:
		std::vector<unsigned long> abundant_nums;
		std::vector<bool> abundant_sum;
		unsigned long sum;


	public:
		bool IsPerfectNumber(unsigned long&);
		bool IsDeficientNumber(unsigned long&);
		bool CanWriteAsSumOfTwoAbundantNumbers(unsigned long&);
		std::vector <bool> FindSumOfAbundantNumbers(const unsigned long &limit);
		unsigned long FindSummationOfDivisors(unsigned long&, unsigned long);
		void PassToVec(unsigned long&);
};
// ########################################################
int main(){
	compute computer;
	unsigned long sum = zero;

	// to find all abundant numebrs which are less than the limit.
	for (unsigned long n = 1 ; n <= limit; n++)
		if(!computer.IsPerfectNumber(n) && !computer.IsDeficientNumber(n))
			computer.PassToVec(n);

	std::vector <bool> abundant_sum = computer.FindSumOfAbundantNumbers(limit);
	for(unsigned long j=one; j<abundant_sum.size(); ++j)
		if(!abundant_sum[j])
			sum += j;

	printf("sum of those numbers which can not be written as the summation of two abundant numbers is: %lu , limit: %lu\n",
			sum, limit);
	return zero;
}

// ########################################################
bool compute::IsPerfectNumber(unsigned long &num){
	if(num>=1){
		sum = this->FindSummationOfDivisors(num, one);
		return sum==num?true:false;
	}
	else
		return false;
}

unsigned long compute::FindSummationOfDivisors(unsigned long& n, unsigned long d){
	if(d <= n * 0.500)
		return (n%d==zero?d:zero) + this->FindSummationOfDivisors(n, d+one);
	else return zero;
}

bool compute::IsDeficientNumber(unsigned long& num){
	return sum<num?true:false;
}

void compute::PassToVec(unsigned long& n){
	abundant_nums.push_back(n);
}

std::vector <bool> compute::FindSumOfAbundantNumbers(const unsigned long &limit){
	abundant_sum.resize(limit + one, false);

	for(unsigned long j=zero; j<abundant_nums.size(); j++)
		for(unsigned long jj=j; jj<abundant_nums.size(); jj++)
			if(abundant_nums[j] + abundant_nums[jj] <= limit)
				this->abundant_sum[abundant_nums[j] + abundant_nums[jj]] = true;
	return abundant_sum;
}
