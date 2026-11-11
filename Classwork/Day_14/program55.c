#include <stdio.h>

void DisplayImpl() 
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++) 
    {
        printf("Jay Ganesh...\n");
    }
}

struct Iteration 
{
    void (*Display)();
};

int main() 
{
    struct Iteration iteration = { DisplayImpl };
    iteration.Display();
    return 0;
}
