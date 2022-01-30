#include<stdio.h>
/*
    Write a program which accept number from user 
    and print factors of that number.
    
    Input : 24
    Output: 1 2 3 4 6 8 12
*/

void PrintFactor(int iNo)
{
    for(int iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    PrintFactor(iValue);
    return 0;
}
    


