#include<iostream>
using namespace std;

int Minimum(int iNo1, int iNo2, int iNo3, int iNo4)
{
    if((iNo1 <= iNo2) && (iNo1 <= iNo3) && (iNo1 <= iNo4))
    {
        return iNo1;
    }
    else if((iNo2 <= iNo1) && (iNo2 <= iNo3) && (iNo2 <= iNo4))
    {
        return iNo2;
    }
    else if((iNo3 <= iNo1) && (iNo3 <= iNo2) && (iNo3 <= iNo4))
    {
        return iNo3;
    }
    else
    {
        return iNo4;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iValue4 = 0;
    int iResult = 0;

    cout << "Enter first number : \n";
    cin >> iValue1;
    
    cout << "Enter second number : \n";
    cin >> iValue2;

    cout << "Enter third number : \n";
    cin >> iValue3;

    cout << "Enter fourth number : \n";
    cin >> iValue4;

    iResult = Minimum(iValue1, iValue2, iValue3, iValue4);

    cout << "Minimum is : " << iResult << "\n";
    
    return 0;
}
