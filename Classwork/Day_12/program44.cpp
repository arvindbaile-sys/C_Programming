#include <iostream>
#include <cstdlib>

float average(int iNo1, int iNo2) 
{
    float fAns = 0.0f;

    fAns = (iNo1 + iNo2) / 2.0f;

    return fAns;
}

int main() 
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    std::cout << "Enter first number : \n";
    std::cin >> iValue1;
        
    std::cout << "Enter second number : \n";
    std::cin >> iValue2;

    fResult = average(iValue1, iValue2);

    std::cout << "Average is : " << fResult << "\n";
        
    return EXIT_SUCCESS;
}
