#include <iostream>
using namespace std;

class Iteration 
{
public:
    void Display(int iNo) 
    {
        int iCnt = 0;

        // Input Updator
        if (iNo < 0) 
        {
            iNo = -iNo;
        }

        for (iCnt = 1; iCnt <= iNo; iCnt++) 
        {
            cout << "Jay Ganesh..." << endl;
        }
    }
};

int main() 
{
    int iValue = 0;
    Iteration iteration;

    cout << "Enter the frequency : " << endl;
    cin >> iValue;

    iteration.Display(iValue);

    return 0;
}
