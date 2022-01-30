#include<stdio.h>
/*
    Write a program which accept one number 
    from user and print that number of even numbers on screen
    Input : 7
    Output : 2 4 6 8 10 12 14 
*/

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iNum = 2;
    if(iNo <= 0)
    {
        return;
    }
    while (iCnt < iNo)
    {
        printf("%d\t",iNum);
        iNum = iNum + 2;
        iCnt++;
    }
    
}
int main(int argc, char const *argv[])
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}
    


