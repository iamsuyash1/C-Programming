#include<stdio.h>

/*
    Write a program which accept range from user and return addition of all even 
    numbers in between that range. (Range should contains positive numbers only)

    Input : 23 30 
    Output : 108

    Input : 10 18
    Output : 70

    Input : -10 2
    Output : Invalid range

    Input : 90 18
    Output : Invalid range
*/

int RangeSumEven(int no1, int no2)
{
    int iCnt = 0, iSum = 0;

    if(no1<0  || no2<0)
    {
        printf("Invalid Range\n");
        return 0;
    }
    if(no1>no2)
    {
        printf("Invalid Range\n");
        return 0;

    }

    for (iCnt = no1; iCnt <= no2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum += iCnt;
        }
    }

    return iSum;
}

int main(int argc, char const *argv[])
{
    int iValue1 =0, iValue2 = 0, iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the endin point\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Additon is %d\n",iRet);
    return 0;
}
