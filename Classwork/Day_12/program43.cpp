#include <iostream>
#include <cstdlib>

int minimum(int iNo1, int iNo2) 
{
    if (iNo1 < iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main() 
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    std::cout << "Enter first number : \n";
    std::cin >> iValue1;
        
    std::cout << "Enter second number : \n";
    std::cin >> iValue2;

    iResult = minimum(iValue1, iValue2);

    std::cout << "Minimum number is : " << iResult << "\n";
        
    return EXIT_SUCCESS;
}
