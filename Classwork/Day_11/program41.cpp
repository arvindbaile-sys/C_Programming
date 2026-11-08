#include <iostream>
#include <cstdlib>

void Maximum(int iNo1, int iNo2) {
    if (iNo1 > iNo2) {
        std::cout << "Maximum is : " << iNo1 << "\n";
    } else {
        std::cout << "Maximum is : " << iNo2 << "\n";
    }
}

int main() {
    int iValue1 = 0, iValue2 = 0;

    std::cout << "Enter first number : \n";
    std::cin >> iValue1;

    std::cout << "Enter second number : \n";
    std::cin >> iValue2;

    Maximum(iValue1, iValue2);

    return EXIT_SUCCESS;
}
