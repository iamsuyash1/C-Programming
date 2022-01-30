#include<stdio.h>
#include<stdbool.h>

/*
    Write a program which accept number from user 
    and return the count of odd digits.

    Input : 2395
    Output : 3

    Input : 1018
    Output : 2

    Input : -1018
    Output : 2

    Input : 8462
    Output : 0
*/
int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 != 0)
        {
            iCnt++;
        }
        
        iNo = iNo/10;
    }
    return iCnt;
}

int main(int argc, char const *argv[])
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet = CountOdd(iValue);
    printf("Count of odd digit is %d\n",iRet);
    
    return 0;
}





















