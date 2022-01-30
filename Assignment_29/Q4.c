#include<stdio.h>
typedef unsigned int UINT;
/*
    4.  Write a program which accept one number and position from user and 
        toggle that bit. Return modified number.    
    
        Input : 10 3
        Output : 14
*/

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;

    iMask = iMask<<(iPos - 1);

    iNo = iNo ^ iMask;

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

    iRet = ToggleBit(iValue,iPos);

    printf("Modified number is : %d\n",iRet);

    return 0;
}
