#include <iostream>
#include <cstdlib>

float Average(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    // Typecasting maintained as it is
    fAns = ((float)iNo1 + (float)iNo2) / 2;

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

    fResult = Average(iValue1, iValue2);

    std::cout << "Average is : " << fResult << "\n";
    
    return EXIT_SUCCESS;
}
