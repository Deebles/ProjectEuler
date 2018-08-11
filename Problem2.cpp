#include <iostream>

int main()
{
unsigned int i1 = 0;
unsigned int i2 = 1;
unsigned int sumTotal = 0;
while(i2 < 4000000){

	if( (i1+i2) % 2 == 0){

		sumTotal = sumTotal + i1 + i2;

	}

i2 = i1 + i2;
i1 = i2 - i1;
}
std::cout << "sum of multiple of even Fibbonacci series under 4 million is: ";
std::cout << sumTotal;
std::endl (std::cout);

return 0;     
}
