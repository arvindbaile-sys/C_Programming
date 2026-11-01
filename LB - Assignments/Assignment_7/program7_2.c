#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Display
    Description   : Displays numbers from 1 to the given number.
    Input         : Integer number (int)
    Output        : Numbers from 1 to the given number
    Author        : Arvind Madhav Baile
    Date          : 01/11/2026
*/

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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
