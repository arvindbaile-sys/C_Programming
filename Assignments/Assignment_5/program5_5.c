/*
    Function Name : CheckCharacterType
    Description    : Classifies a character as uppercase, lowercase, digit, or special.
    Input          : A single character
    Output         : Uppercase Alphabet, Lowercase Alphabet, Digit, or Special Character
    Author         : Arvind Madhav Baile
    Date           : 22/10/2026
*/

#include <stdio.h>
#include <stdlib.h>


void CheckCharacterType(char cValue)
{
    if ((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet\\n");
    }
    else if ((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet\\n");
    }
    else if ((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit\\n");
    }
    else
    {
        printf("Special Character\\n");
    }
}


int main(void)
{
    char cValue = '\\0';

    printf("Enter a character: ");
    if (scanf(" %c", &cValue) != 1)
    {
        printf("Invalid input\\n");
        return EXIT_FAILURE;
    }

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
