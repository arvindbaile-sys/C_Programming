#include <iostream>
#include <cstdlib>

using namespace std;

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "enter the number";
    cin >> iValue;

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        cout << " it is even";
    }
    else
    {
        cout <<" it is odd";
    }

    return EXIT_SUCCESS;
}