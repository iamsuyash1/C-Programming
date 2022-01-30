#include<stdio.h>
/*
    Write a program which accept number from user 
    and print even factors of that number. 

    Input : 36
    Output: 2 6 12 18 
*/

void PrintEvenFactor(int iNo)
{
    for(int iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {   
            if (iCnt % 2 == 0)
            {
                printf("%d\t",iCnt);
            }
            
            
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    PrintEvenFactor(iValue);
    return 0;
}
    


