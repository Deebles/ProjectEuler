#include <iostream>
#include <vector>

bool checkPalindrome(int inputNum)
{

 int originalNum, digit, rev=0;
 bool isPal;

 originalNum = inputNum;

 do
 {

 digit = inputNum % 10;
 rev = (rev * 10) + digit;
 inputNum = inputNum / 10;
 
 } while (inputNum != 0);
 
if (originalNum==rev)
        return true;
 else
	return false;
}


int main()
{
int i,j,inputNum = 0;
int highNum = 0;
for(i=1;i<1000;i++){
	for(j=i; j<1000;j++){
		inputNum = i*j;
		if(checkPalindrome(inputNum) == true && inputNum > highNum)
			inputNum = highNum;

		}

	}
std::cout << "What happened?" << std::endl;
return 0;

}
