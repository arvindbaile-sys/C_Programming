#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iCnt = 0;
    int iSum = 0;

    iCnt = 1;

    iSum = iSum + iCnt;
    iCnt++;

    iSum = iSum + iCnt;
    iCnt++;

    iSum = iSum + iCnt;
    iCnt++;

    iSum = iSum + iCnt;
    iCnt++;

    printf("%d\n",iSum);

    return EXIT_SUCCESS;
}