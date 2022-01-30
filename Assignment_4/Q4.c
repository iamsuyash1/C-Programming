#include<stdio.h>
/*
   Write a program which accept number from user 
   and return summation of all its non factors.
    
    Input : 12
    Output : 50
    
    Input : 10
    Output : 37
*/

int SumNonFactor(int iNo)
{  
    int iSum = 0;
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iSum+=iCnt;
        }
    }
    return iSum;
}

int main(int argc, char const *argv[])
{
    int iValue = 0, iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = SumNonFactor(iValue);
    printf("Summation of non factors is %d\n",iRet);

    return 0;
}
















