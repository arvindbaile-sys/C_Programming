#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Display
    Description   : Displays all odd numbers from 1 to the given number.
    Input         : Integer number (int)
    Output        : Odd numbers up to the given number
    Author        : Arvind Madhav Baile
    Date          : 01/11/2026
*/


void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
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
