#include <stdio.h>
#include <stdlib.h>

/*
///////////////////////////////////////////////////////////////////////
//
// Function Name : CheckVotingEligibility
// Description   : It checks voting eligibility based on age; negative age is invalid.
// Input         : Integer (age in years)
// Output        : Eligible for Voting, Not Eligible for Voting, or Invalid Age
// Author        : Arvind Madhav Baile
// Date          : 22/10/2026
//
///////////////////////////////////////////////////////////////////////
*/
void CheckVotingEligibility(int iAge)
{
    if (iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if (iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}


int main(void)
{
    int iAge = 0;

    printf("Enter your age: ");
    if (scanf("%d", &iAge) != 1)
    {
        printf("Invalid input\n");
        return EXIT_FAILURE;
    }

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
