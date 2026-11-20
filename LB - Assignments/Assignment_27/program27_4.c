#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

/*
    Function Name : ChkVowel
    Description   : Accept a string and check whether it contains at least one vowel. The OR conditions compare each character with the vowels in both cases.
    Input         : A string.
    Output        : TRUE if the string contains a vowel; otherwise FALSE.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%19[^\n]",arr);

    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowel \n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return EXIT_SUCCESS;
}
