#include <stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number : \n ");
    scanf("%d",&iValue1);

    printf("Enter second Numbr : \n ");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;

    printf("Addition is : %d\n",iResult);

    return 0;
}