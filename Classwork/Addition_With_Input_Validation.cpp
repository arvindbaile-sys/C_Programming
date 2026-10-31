#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

int Addition(
                int iNo1,
                int iNo2

            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    cout << "Enter the number : \n";

    if(!(cin >> iValue1))
    {
        cerr << "Unable to procced as input is invalid \n";

        return EXIT_FAILURE;
    }

    if(!(cin >> iValue2))
    {
        cerr << "Unable to procced as input is invalid \n";

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1.iValue2);
}