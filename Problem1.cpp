#include <iostream>

int main()
{
	int uLimit = 1000;
	int i = 1;
	int sumTotal = 0;
	while(i < uLimit){
	if ( (i % 5 == 0) || (i % 3 ==0) )
	sumTotal = sumTotal + i;
	i++;
}
std::cout << "sum of multiple of 3 or 5 is: ";
std::cout << sumTotal;
std::endl (std::cout);
	return 0;
}
