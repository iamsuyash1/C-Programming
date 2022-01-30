#include<stdio.h>
#include<stdbool.h>

/*
    Write a program which accept number from user and 
    count frequency of such a digits which are less than 6.

    Input : 2395 
    Output : 3

    Input : 1018
    Output : 3

    Input : 9440
    Output : 3

    Input : 96672
    Output : 1
*/
int CountLessThanSix(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit < 6)
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
    iRet = CountLessThanSix(iValue);
    printf("Frequency of less than 6 digit is %d\n",iRet);
    
    return 0;
}





















