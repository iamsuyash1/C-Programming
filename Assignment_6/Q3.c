#include<stdio.h>
#include<stdbool.h>

/*
    Write a program which accept number from user and 
    return the count of digits in between 3 and 7.
    
    Input : 2395 
    Output : 1

    Input : 1018
    Output : 0

    Input : 4521
    Output : 2

    Input : 9922
    Output : 0
*/
int CountbetThreeSeven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit > 3 && iDigit < 7)
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
    iRet = CountbetThreeSeven(iValue);
    printf("Count of digit is %d\n",iRet);
    
    return 0;
}





















