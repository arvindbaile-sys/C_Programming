#include <stdio.h>
#include <stdlib.h>

void CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("It Is Even number");
    }
    else
    {
        printf("It Is Odd Number");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    CheckEven(iValue);

    return EXIT_SUCCESS;
}