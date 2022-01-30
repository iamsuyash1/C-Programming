#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

/*
    3.  Write a program which accept one number from user and check whether 
        9th or 12th bit is on or off.

        Input : 257
        Output : TRUE
*/

bool ChkBit(UINT iNo1)
{
    UINT iMask1 = 0X100;
    UINT iMask2 = 0X800;
    UINT iResult1 = 0, iResult2 = 0;

    iResult1 = iNo1 & iMask1;
    iResult2 = iNo1 & iMask2;

    if ((iResult1 == iMask1) || (iResult2 == iMask2))
    {
        return true;
    }
    else
        return false;  
}

int main (int argc, char const *argv[])
{
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if (bRet == true)
    {
        printf("TRUE\n");
    }
    else
        printf("FALSE\n");   

    return 0;
}
