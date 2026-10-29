#include <stdio.h>

int main()
{
    int iValue1, iValue2 , iResult;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second number : \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;

    printf("%d\n",iResult);

    return 0;
}