#include<stdio.h>
/*
    Write a program which accept number from 
    user and display its multiplication of factors.
    
    Input : 12
    Output : 144 (1 * 2 * 3 * 4 * 6)
    Input : 13
    Output : 1 (1)
    Input : 10
    Output : 10 (1 * 2 * 5)
*/

int MultFactor(int iNo)
{
    int iCnt =0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMult*=iCnt;
        }
    }
    return iMult;
}

int main(int argc, char const *argv[])
{
    int iValue = 0, iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = MultFactor(iValue);
    printf("Multiplication of factor is %d\n",iRet);
    return 0;
}
















