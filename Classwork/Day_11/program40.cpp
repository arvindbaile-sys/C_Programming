#include <iostream>
#include <cstdlib>

int main() {
    int iValue1 = 0, iValue2 = 0;

    std::cout << "Enter first number : \n";
    std::cin >> iValue1;

    std::cout << "Enter second number : \n";
    std::cin >> iValue2;

    if (iValue1 > iValue2) {
        std::cout << "Maximum is : " << iValue1 << "\n";
    } else {
        std::cout << "Maximum is : " << iValue2 << "\n";
    }

    return EXIT_SUCCESS;
}
