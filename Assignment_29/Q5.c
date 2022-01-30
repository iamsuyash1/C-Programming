#include<stdio.h>
typedef unsigned int UINT;

/*
    5.  Write a program which accept one number from user and toggle contents 
        of first and last nibble of the number. Return modified number. (Nibble is a 
        group of four bits)
*/

UINT ToggleNibble(UINT iNo)
{
    UINT iMask = 0XF000000F;

    iNo = iNo ^ iMask;

    return iNo;
}
int main(int argc, char const *argv[])
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    iRet = ToggleNibble(iValue);

    printf("Modified number is : %d\n",iRet);

    return 0;
}

