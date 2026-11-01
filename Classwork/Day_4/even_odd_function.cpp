#include <iostream>
#include <cstdlib>

using namespace std;

void CheckEven(int iNo)
{
    if((iNo % 2) ==0)
    {
        cout << "It Is Even Number";
    }
    else
    {
        cout << "It is odd number";
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the number\n";
    cin >> iValue;

    CheckEven(iValue);

    return EXIT_SUCCESS;

}