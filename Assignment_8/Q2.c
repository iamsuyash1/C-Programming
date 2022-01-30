#include<stdio.h>

/*
    Write a program which accept range from user and display all even numbers in 
    between that range.

    Input : 23 35 
    Output : 24 26 28 30 32 34

    Input : 10 18
    Output : 10 12 14 16 18

    Input : 10 10
    Output : 10

    Input : -10 2
    Output : -10 -8 -6 -4 -2 0 2

    Input : 90 18
    Output : Invalid range
*/

void RangeDisplay(int no1, int no2)
{
    int iCnt = 0;

    if(no1>no2)
    {
        printf("Invalid Range\n");
    }

    for (iCnt = no1; iCnt <= no2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main(int argc, char const *argv[])
{
    int iValue1 =0, iValue2 = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the endin point\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return 0;
}
