#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Display
    Description   : Displays numbers from the negative of the given number to the positive number.
    Input         : Integer number (int)
    Output        : Numbers from -N to N
    Author        : Arvind Madhav Baile
    Date          : 01/11/2026
*/

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
