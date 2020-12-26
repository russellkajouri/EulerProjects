#include <iostream>

int main(){


	const int MAX = 1000;
	const int VALUE = 1000;

	int LeftSum = 0;
	int RightSum = 0;

	for (int c = 1; c < MAX; c++)
		for(int b = 1; b < MAX; b++)
			for(int a = 1; a < MAX; a++){

				LeftSum  = a*a + b*b;
				RightSum = c*c;

				if (LeftSum == RightSum && a+b+c == VALUE)
					std::cout << a << '*' << b << '*' << 
						c << '=' << a*b*c << std::endl;
			}
	return 0;
}
