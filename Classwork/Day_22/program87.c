#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        if((iNo % 5) == 0)
        {
            printf("it is divisible\n ");
        }
        else
        {
            printff("it is not Divisible\n");
        }

    }
    else
    {
        printf("it is Not Divisible\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}