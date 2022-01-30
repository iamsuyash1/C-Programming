#include<stdio.h>
/*
    Accept number from user and display below pattern.
    
    Input : 5
    Output : A B C D E

*/

void Pattern(int no)
{
    int iCnt = 0;

    for (iCnt = 65; iCnt < (65+no); iCnt++)
    {
        printf("%c\t",iCnt);
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
