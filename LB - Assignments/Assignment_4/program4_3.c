#include <stdio.h>
#include <stdlib.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : FindGreater
// Description   : It compares two integers and displays the greater one or reports equality.
// Input         : Two integers
// Output        : Greater number or Both Numbers Are Equal
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void FindGreater(int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if (iSecond > iFirst)
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}


int main(void)
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &iValue1, &iValue2) != 2)
    {
        printf("Invalid input\n");
        return EXIT_FAILURE;
    }

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}
