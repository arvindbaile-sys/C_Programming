#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : DisplayASCII
    Description   : Display the ASCII table from decimal value 0 to 255 with decimal, hexadecimal, octal and character representations.
    Input         : No input.
    Output        : ASCII values from 0 to 255.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

void DisplayASCII()
{
    int iCnt = 0;

    printf("Dec\tHex\tOct\tChar\n");
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t%X\t%o\t%c\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
