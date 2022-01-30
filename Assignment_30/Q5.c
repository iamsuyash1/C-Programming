#include<stdio.h>
typedef unsigned int UINT;

/*
    5.  Write a program which accept one number from user and range of 
        positions from user. Toggle all bits from that range.

    Input : 897 9 13
    Toggle all bits from position 9 to 13 of input number ie 879
*/

UINT ToogleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask1 = 0XFFFFFFFF;
    UINT iMask2 = 0XFFFFFFFF;

    iMask1 = iMask1 << (iStart - 1);
    iMask2 = iMask2 >> (32 - iEnd);

    UINT iMaskF = iMask1 & iMask2;

    iNo = iNo ^ iMaskF;

    return iNo;
}

int main(int argc, char const *argv[])
{
    UINT iValue = 0, iRet = 0;
    UINT iStart = 1, iEnd = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter start point\n");
    scanf("%d",&iStart);

    printf("Enter the end point\n");
    scanf("%d",&iEnd);

    iRet = ToogleBitRange(iValue,iStart,iEnd);

    printf("Modified number is : %d\n",iRet);
    return 0;
}
