#include<stdio.h>
typedef unsigned int UINT;
/*
    Write a program which accept one number and position from user and off 
    that bit. Return modified number.

    Input : 10 2
    Output : 8
*/

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;

    iMask = iMask<<(iPos - 1);
    UINT iResult = iNo & iMask;

    if (iResult == iMask)
    {
        iNo = iNo ^ iMask;

        return iNo;
    }
    else
        return iNo;    
}

int main(int argc, char const *argv[])
{
    UINT iValue = 0, iPos = 0;
    UINT iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter the position\n");
    scanf("%d",&iPos);

    iRet = OffBit(iValue,iPos);

    printf("Modified number is : %d\n",iRet);

    return 0;
}
