#include <iostream>

using namespace std;

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    cout << "Enter first number :\n";
    cin >> iValue1;

    cout << "Enter second number :\n";
    cin >> iValue2;

    iResult = iValue1 + iValue2;

    cout << "Addition is : %d\n",iResult;

    return 0;
}