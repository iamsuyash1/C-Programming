#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*
    Write a program which checks whether first and last bit is On or 
    OFF. First bit means bit number 1 and last bit means bit number 32. 
*/

bool ChkBit(UINT iNo)
{
    UINT iMask1 = 0X1;
    UINT iMask2 = 0X80000000;
    
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
        printf("First and 32nd bit is ON\n");
    }
    else
        printf("Bit is OFF\n");
    
    return 0;
}