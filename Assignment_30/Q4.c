#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

/*
    3.  Write a program which accept one number from user and check whether 
        9th or 12th bit is on or off.

        Input : 257
        Output : TRUE
*/

bool ChkBit(UINT iNo1, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iResult1 = 0, iResult2 = 0;

    iMask1 = iMask1 << (iPos1);
    iMask2 = iMask2 << (iPos2);

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
    UINT iValue = 0, iPos1 = 0, iPos2 = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter the 1st Position\n");
    scanf("%d",&iPos1);

    printf("Enter the 2nd Position\n");
    scanf("%d",&iPos2);

    bRet = ChkBit(iValue, iPos1, iPos2);

    if (bRet == true)
    {
        printf("TRUE\n");
    }
    else
        printf("FALSE\n");   

    return 0;
}
