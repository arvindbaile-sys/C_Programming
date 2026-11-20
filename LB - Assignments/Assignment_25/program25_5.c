#include <stdio.h>
#include <stdlib.h>

/*
    Function Name : DisplaySchedule
    Description   : Accept a division character and display its examination time. The switch statement selects the time for divisions A to D.
    Input         : Division character A, B, C or D.
    Output        : Examination time for the selected division.
    Author        : Arvind Madhav Baile
    Date          : 20/11/2026
*/

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A':
        case 'a':
            printf("Your exam at 7 AM \n");
            break;
        case 'B':
        case 'b':
            printf("Your exam at 8.30 AM \n");
            break;
        case 'C':
        case 'c':
            printf("Your exam at 9.20 AM \n");
            break;
        case 'D':
        case 'd':
            printf("Your exam at 10.30 AM \n");
            break;
        default:
            printf("Invalid division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}
