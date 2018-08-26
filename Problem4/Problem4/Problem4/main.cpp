//
//  main.cpp
//  Problem4
//
//  Created by Deebles on 12/08/2018.
//  Copyright © 2018 Deebles. All rights reserved.
//

#include <iostream>
#include <vector>

bool checkPalindrome(int num);

int main(int argc, const char * argv[]) {
    
    int num, factor1, factor2, finalNum;
    finalNum=1;
    
    for(factor1 = 1; factor1 < 1000; factor1++)
    {
        for(factor2 = factor1; factor2 < 1000; factor2++)
        {
            num = factor1*factor2;
            // std::cout << checkPalindrome(num);
            
            if ( (checkPalindrome(num) ) && (num > finalNum) )
            {
                finalNum = num;
            }
            else
            {
                finalNum = finalNum;
            }
            }
        }
    //std::cout << "The largest palindromic number that's a product of two three figure numbers is: " << std::endl;
    std::cout << finalNum << std::endl;
    return 0;
}

bool checkPalindrome(int num)
{
    int digit, originalNum, rev = 0;
    bool isPal = false;
    originalNum = num;
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num /10;
    } while (num != 0);
    
    if (originalNum==rev)
    {
        isPal = true;
    }
    //std::cout << originalNum << " , " << rev << std::endl;
    
    return isPal;
}
