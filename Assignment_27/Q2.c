#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*
    2. Write a program which checks whether 5th & 18th bit is On or OFF. 
*/

bool ChkBit(UINT iNo)
{
    UINT iMask1 = 0X10;
    UINT iMask2 =0X20000;
    UINT iResult = 0;

    UINT iMask = 0;

    iMask = iMask1 | iMask2;

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
        printf("5th and 18th Bit is ON\n");
    }
    else
        printf("Bit is OFF\n");
    
    return 0;
}