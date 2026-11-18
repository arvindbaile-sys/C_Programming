#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0)  && ((iNo % 5) == 0))
    {
        printf("It is Divisible\n");
    }
    else
    {
        printf("It is Not Divisible\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}