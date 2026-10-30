#include <iostream>

using namespace std;

int main()
{
    int iValue1, iValue2 , iResult;

    cout << "Enter first number : \n";
    cin >> iValue1;

    cout << "Enter second number : \n";
    cin >> iValue2;

    iResult = iValue1 + iValue2;

    cout << "%d\n"+iResult;

    return 0;
}