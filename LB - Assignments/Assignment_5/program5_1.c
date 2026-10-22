/*
    Function Name : FindGreatest
    Description    : Accepts three integers and displays the greatest number.
    Input          : Three integers
    Output         : The greatest number followed by "is Greatest"
    Author         : Arvind Madhav Baile
    Date           : 22/10/2026
*/

#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if ((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%d is Greatest\\n", iFirst);
    }
    else if ((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("%d is Greatest\\n", iSecond);
    }
    else
    {
        printf("%d is Greatest\\n", iThird);
    }
}


int main(void)
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &iValue1, &iValue2, &iValue3) != 3)
    {
        printf("Invalid input\\n");
        return EXIT_FAILURE;
    }

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}
