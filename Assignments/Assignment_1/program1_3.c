#include <stdio.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It prints numbers from 5 down to 1.
// Input         : None
// Output        : Prints 5 4 3 2 1
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void Display(void)
{
    int i = 5;

    while (i >= 1)
    {
        printf("%d ", i);
        i--;
    }

    printf("\n");
}


int main(void)
{
    Display();
    return 0;
}
