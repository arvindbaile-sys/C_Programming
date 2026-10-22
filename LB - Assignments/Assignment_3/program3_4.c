#include <stdio.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Description   : It converts a lowercase letter to uppercase or uppercase to lowercase.
// Input         : Character
// Output        : Prints the converted character if it is an English letter
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - ('a' - 'A');
        printf("%c\n", cValue);
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + ('a' - 'A');
        printf("%c\n", cValue);
    }
    else
    {
        printf("Please enter an English alphabet character\n");
    }
}


int main(void)
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
