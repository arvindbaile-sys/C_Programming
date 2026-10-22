#include <stdio.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Description   : It prints the first iNo even numbers.
// Input         : Integer
// Output        : Prints the first iNo even numbers
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }

    int i = 0;
    for (i = 1; i <= iNo; i++)
    {
        printf("%d ", i * 2);
    }
    printf("\n");
}


int main(void)
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
