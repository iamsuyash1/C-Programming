#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*
    Write a program which accept one number from user and on its first 4 
    bits. Return modified number.

    Input : 73
    Output : 79
*/

UINT OnBit(UINT iNo)
{   
    UINT iResult = 0;    
    UINT iMask = 0XF;
    
    iResult = iNo & iMask;

    if (iResult == iMask)
    {
         return iNo;
    }
    else if (iResult != iMask)
    {
        iNo = iNo | iMask;
        return iNo;
    }   
}

int main(int argc, char const *argv[])
{
    UINT iNo = 0;
    UINT uRet = false;

    printf("Enter the number\n");
    scanf("%d",&iNo);

    uRet = OnBit(iNo);

    printf("Number is : %d\n",uRet);    
    return 0;
}