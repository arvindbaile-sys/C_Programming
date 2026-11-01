#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : MultipleDisplay
    Description   : Displays the first five multiples of the given number.
    Input         : Integer number (int)
    Output        : First five multiples of the number
    Author        : Arvind Madhav Baile
    Date          : 01/11/2026
*/

void MultipleDisplay(int iNo)
{
    int iDigit = 0;
    int iCnt = 5;

    for(iDigit = 1; iDigit <= iCnt; iDigit++)
    {
        printf("%d\t",iNo * iDigit);
    }
    printf("\n");
}


int main()
{
    int iValue = 0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}
