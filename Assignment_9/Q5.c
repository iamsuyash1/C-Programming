#include<stdio.h>
/*
    Accept number from user and display below pattern.

    Input : 8
    Output : 2 4 6 8 10 12 14 16
*/

void Pattern(int no)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= no; iCnt++)
    {
        printf("%d\t",2*iCnt);
    }
}

int main(int argc, char const *argv[])
{
    int iValue = 0; 
    printf("Enter the number of elements\n");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}
