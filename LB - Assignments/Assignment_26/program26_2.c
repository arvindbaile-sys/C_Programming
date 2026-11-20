#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Display
    Description   : Accept a character. If it is lowercase, display its corresponding uppercase character; if uppercase, display lowercase; otherwise display it unchanged.
    Input         : One character.
    Output        : Corresponding case character or the original character.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c\n",ch - 32);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n",ch + 32);
    }
    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character \n ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
