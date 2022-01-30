#include<stdio.h>
#include<stdbool.h>

/*
    Write a program which accept number from user 
    and check whether it contains 0 in it or not.

    Input : 2395 
    Output : There is no Zero

    Input : 1018
    Output : It Contains Zero

    Input : 9000
    Output : It Contains Zero

    Input : 10687
    Output : It Contains Zero
*/
bool CheckZeroDigit(int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return true;
        }
        
        iNo = iNo/10;
    }
}

int main(int argc, char const *argv[])
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    bRet = CheckZeroDigit(iValue);
    if (bRet == true)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is no zero\n");
    }
    return 0;
}





















