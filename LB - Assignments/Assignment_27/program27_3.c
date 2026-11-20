#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : Difference
    Description   : Accept a string and return the difference between the frequency of small and capital characters. The result is small-character count minus capital-character count.
    Input         : A string.
    Output        : Difference between small and capital character counts.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        str++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%19[^\n]",arr);

    iRet = Difference(arr);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}
