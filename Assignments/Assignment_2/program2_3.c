#include <stdio.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It prints Hello if the number is less than 10; otherwise, it prints Demo.
// Input         : Integer
// Output        : Hello or Demo
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}


int main(void)
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
