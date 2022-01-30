#include<stdio.h>
#include<stdbool.h>

/*
    1.Write a program which accept one number and position from user and 
    check whether bit at that position is on or off. If bit is one return TURE 
    otherwise return FALSE.
*/

bool ChkBit(int iNo, int iPos)
{
    int iMask = 0X00000001;
    int iResult = 0;
    iMask = iMask<<(iPos-1);

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
    int iValue = 0; 
    int iPos = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter the position of bit\n");
    scanf("%d",&iPos);

    bRet = ChkBit(iValue, iPos);

    if (bRet == true)
    {
        printf("%d bit is ON\n",iPos);
    }
    else
        printf("%d bit is Off\n",iPos);
        
    
    return 0;
}

