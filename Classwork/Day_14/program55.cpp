#include <iostream>
using namespace std;

class Iteration 
{
public:
    void Display() 
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 4; iCnt++) 
        {
            cout << "Jay Ganesh..." << endl;
        }
    }
};

int main() 
{
    Iteration iteration;
    iteration.Display();
    return 0;
}
