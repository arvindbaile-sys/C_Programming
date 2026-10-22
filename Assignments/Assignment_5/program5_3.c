/*
    Function Name : DisplayGrade
    Description    : Displays a student's grade based on marks out of 100.
    Input          : Marks as a floating-point number
    Output         : Grade A/B/C/D, Fail, or Invalid Marks
    Author         : Arvind Madhav Baile
    Date           : 22/10/2026
*/

#include <stdio.h>
#include <stdlib.h>


void DisplayGrade(float fMarks)
{
    if ((fMarks < 0.0f) || (fMarks > 100.0f))
    {
        printf("Invalid Marks\\n");
    }
    else if (fMarks >= 90.0f)
    {
        printf("Grade A\\n");
    }
    else if (fMarks >= 75.0f)
    {
        printf("Grade B\\n");
    }
    else if (fMarks >= 60.0f)
    {
        printf("Grade C\\n");
    }
    else if (fMarks >= 40.0f)
    {
        printf("Grade D\\n");
    }
    else
    {
        printf("Fail\\n");
    }
}


int main(void)
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    if (scanf("%f", &fMarks) != 1)
    {
        printf("Invalid input\\n");
        return EXIT_FAILURE;
    }

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}
