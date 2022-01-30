#include<stdio.h>

/*
    Write a program which accept number from user 
    and display its digits in reverse order.
    Input : 2395 
    Output : 5
            9
            3
            2
    Input : 1018
    Output :8
            1
            0
            1

    Input : -1018
    Output : 8
            1
            0
            1

    Input : 9000
    Output : 0
            0
            0
            9
*/
void DisplayRevDigit(int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }
}

int main(int argc, char const *argv[])
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    DisplayRevDigit(iValue);
    return 0;
}





















