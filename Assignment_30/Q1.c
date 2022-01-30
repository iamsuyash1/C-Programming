#include<stdio.h>
typedef unsigned int UINT;

/*
    Write a program which accept one number from user and count number of 
    ON (1) bits in it without using % and / operator.

    Input : 11
    Output : 3
*/

UINT CountOnBit(UINT iNo)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
    int i = 0;
    int iCount = 0;

    for ( i = 0; i < 32; i++)
    {
        iResult = iMask & iNo;
        if (iResult == iMask)
        {
            iCount++;
        }
        iMask = iMask << 1;        
    }
    return iCount;
}

int main(int argc, char const *argv[])
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = CountOnBit(iValue);
    printf("Number of ON bits ar e : %d\n",iRet);

    return 0;
}
