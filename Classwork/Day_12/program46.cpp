#include <iostream>
#include <cstdlib>

float Average(int iNo1, int iNo2, int iNo3)
{
    float fAns = 0.0f;

    // Typecasting maintained as it is
    fAns = ((float)iNo1 + (float)iNo2 + (float)iNo3) / 3;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    float fResult = 0.0f;

    std::cout << "Enter first number : \n";
    std::cin >> iValue1;
    
    std::cout << "Enter second number : \n";
    std::cin >> iValue2;

    std::cout << "Enter third number : \n";
    std::cin >> iValue3;

    fResult = Average(iValue1, iValue2, iValue3);

    std::cout << "Average is : " << fResult << "\n";
    
    return EXIT_SUCCESS;
}
