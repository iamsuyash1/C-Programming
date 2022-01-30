#include<stdio.h>
/*
    Write a program which accept number from 
    user and return difference between 
    summation of all its factors and non factors.

    Input : 12
    Output : -34 (16 - 50)

    Input : 10  
    Output : -29 (8 - 37)
*/

int DiffFactNonFactor(int iNo)
{  
    int iSum = 0, iSumF = 0;
    int iDiff = 0;
    for(int iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iSum+=iCnt;
        }
        else if (iNo % iCnt == 0)
        {
            iSumF += iCnt;
        }
    }
    iDiff = iSumF - iSum;
    return iDiff;
}

int main(int argc, char const *argv[])
{
    int iValue = 0, iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = DiffFactNonFactor(iValue);
    printf("Difference is %d\n",iRet);

    return 0;
}
















