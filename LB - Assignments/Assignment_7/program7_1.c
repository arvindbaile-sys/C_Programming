#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Pattern
    Description   : Displays a repeated dollar and asterisk pattern.
    Input         : Number of repetitions (int)
    Output        : Dollar and asterisk pattern
    Author        : Arvind Madhav Baile
    Date          : 01/11/2026
*/

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}