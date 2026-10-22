#include <stdio.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It prints the specified number of asterisks using a decrementing counter.
// Input         : Integer (number of asterisks)
// Output        : Prints the requested number of *
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void Display(int iNo)
{
    while (iNo > 0)
    {
        printf("* ");
        iNo--;
    }
    printf("\n");
}


int main(void)
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
