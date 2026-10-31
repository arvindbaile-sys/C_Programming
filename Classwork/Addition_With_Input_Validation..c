#include <stdio.h>
#include <stdlib.h>
int Addition(
                int iNo1,
                int iNo2
            )
{
    int iAns = 0 ;

    iAns = iNo1 + iNo2;

    return iAns;
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number : \n");
    if(scanf("%D",&iValue1) != 1)
    {
        fprint(stderr,"Unable to proceed as invalid \n ");

        return EXIT_FAILURE;
    }

    printf("Enter second number : \n");
    if(scanf("%D",&iValue2) != 1)
    {
        fprint(stderr,"Unable to proceed as invalid \n ");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1,iValue2);

    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;

}