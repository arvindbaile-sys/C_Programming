#include <stdio.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It prints the first number the specified number of times.
// Input         : Integer (number), Integer (frequency)
// Output        : Prints the number according to the frequency
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }
    printf("\n");
}


int main(void)
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    printf("Enter frequency\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
