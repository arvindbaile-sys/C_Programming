/*
    Function Name : CheckAdmission
    Description    : Checks admission eligibility using marks and age.
    Input          : Marks (0-100) and age
    Output         : Eligible for Admission, Not Eligible, or Invalid Input
    Author         : Arvind Madhav Baile
    Date           : 22/10/2026
*/

#include <stdio.h>
#include <stdlib.h>


void CheckAdmission(float fMarks, int iAge)
{
    if (iAge < 0 || fMarks < 0.0f || fMarks > 100.0f)
    {
        printf("Invalid Input\n");
        return;
    }

    if (fMarks >= 60.0f && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}


int main(void)
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    if (scanf("%f %d", &fMarks, &iAge) != 2)
    {
        printf("Invalid Input\n");
        return EXIT_FAILURE;
    }

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
