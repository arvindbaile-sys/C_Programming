#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Display
    Description   : Accept a character. If it is capital, display characters from it up to Z; if small, display characters in reverse order down to a; otherwise display the character directly.
    Input         : One character.
    Output        : The requested sequence of characters.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch <= 'Z')
        {
            printf("%c\t",ch);
            ch++;
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else
    {
        printf("%c",ch);
    }
    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
