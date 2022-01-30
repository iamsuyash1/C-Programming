#include<stdio.h>
/*
   Write a program which accept number from user 
   and display all its non factors.
    
    Input : 12
    Output : 5 7 8 9 10 11
    
    Input : 13
    Output : 2 3 4 5 6 7 8 9 10 11 12
    
    Input : 10
    Output : 3 4 6 7 8 9
*/

void NonFactor(int iNo)
{  

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    NonFactor(iValue);
    return 0;
}
















