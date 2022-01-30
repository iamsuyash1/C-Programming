#include<stdio.h>
/*
    Accept number from user and display below pattern.

    Input : 5
    Output : 5 # 4 # 3 # 2 # 1 #

*/

void Pattern(int no)
{
    int iCnt = 0;

    for (iCnt = no; iCnt >= 1; iCnt--)
    {
        printf("%d   #\t",iCnt);
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
