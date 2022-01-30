#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/*
     Write a program which accept one number from user and off 7th and 10th 
    bit of that number. Return modified number
*/

UINT ChkBit(UINT iNo)
{   
    UINT iResult = 0;
    UINT iMask1 = 0X40;
    UINT iMask2 = 0X200;

    UINT iMask = 0;
    iMask = iMask1 | iMask2;
    
    iResult = iNo & iMask;
    if (iResult == iMask)
    {
         iNo = iNo ^ iMask;
         return iNo;
    }
    else
        return iNo;
}

int main(int argc, char const *argv[])
{
    UINT iNo = 0;
    UINT uRet = false;

    printf("Enter the number\n");
    scanf("%d",&iNo);

    uRet = ChkBit(iNo);

    printf("Number is : %d\n",uRet);    
    return 0;
}