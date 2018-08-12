#include <iostream>
#include <iterator>
#include <vector>

bool checkPrime(unsigned long long int);
bool checkFactor(unsigned long long int, unsigned long long int);

int main()
{
unsigned long long int target = 600851475143;
//600851475143 13195;
unsigned long long int runningTarget = 2;
std::vector<unsigned long long int> resVect;

for(runningTarget = 2; runningTarget <= target; runningTarget++)
	{

	if(checkFactor( target , runningTarget) && checkPrime(runningTarget)){
		resVect.push_back(runningTarget);
        target = target/runningTarget;
		}
	}

for (std::vector<unsigned long long int>::const_iterator i = resVect.begin(); i != resVect.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
    std::cout << "The largest Prime Factor is : ";
    std::cout << resVect.back() << std::endl;
	return 0;
}


bool checkFactor (unsigned long long int a , unsigned long long int b)
{
    bool isFactor = false;
    if (a % b == 0)
    {
        isFactor = true;
    }
    return isFactor;
}


bool checkPrime (unsigned long long int x)
{
    
    bool isPrime = true;
    
    for(unsigned long long int i = 2; i <= x/2; i++)
    {
        if (x % i == 0)
        {
            isPrime =  false;
            break;
        }
    }
    return isPrime;
}