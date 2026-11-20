#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Display
    Description   : Accept a character and display its ASCII value in decimal, octal and hexadecimal formats using %d, %o and %X format specifiers.
    Input         : One character.
    Output        : ASCII value in decimal, octal and hexadecimal.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

void Display(char ch)
{
    printf("Decimal      %d\n",ch);
    printf("Octal        %o\n",ch);
    printf("Hexadecimal  0X%X\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
