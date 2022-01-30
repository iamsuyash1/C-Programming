#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*
    1.Write a program which checks whether 15th bit is On or OFF. 
*/

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X4000;
    UINT iResult = 0;

    iResult = iNo&iMask;

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
        printf("15th Bit is ON\n");
    }
    else
        printf("Bit is OFF\n");
    
    return 0;
}


