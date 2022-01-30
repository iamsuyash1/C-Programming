#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*
    Write a program which checks whether 7th & 15th & 21st , 28th bit 
    is On or OFF.
*/

bool ChkBit(UINT iNo)
{
    UINT iMask1 = 0X40;
    UINT iMask2 = 0X80;
    UINT iMask3 = 0X100;
    
    UINT iResult = 0;

    UINT iMask = 0;

    iMask = iMask1 | iMask2 | iMask3 ;

    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return true;
    }
    else
        return false;
}

int main(int argc, char const *argv[])
{
    UINT iNo = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iNo);

    bRet = ChkBit(iNo);

    if (bRet == true)
    {
        printf("7th, 8th and 9th Bit is ON\n");
    }
    else
        printf("Bit is OFF\n");
    
    return 0;
}