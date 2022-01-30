#include<stdio.h>
typedef unsigned int UINT;
/*
    2. Write a program which accept two numbers from user and display position 
    of common ON bits from that two numbers.

    Input : 10 15 (1010 1111)   
    Output : 2 4
*/

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;

    UINT iResult1 = 0;
    UINT iResult2 = 0;

    for (int i = 1; i <= 32; i++)
    {
        iResult1 = iMask1 & iNo1;
        iResult2 = iMask2 & iNo2;

        if ((iResult1 == iMask1)  && (iResult2 == iMask2))
        {
            printf("%d\t",i);
        }
        iMask1 = iMask1 << 1;
        iMask2 = iMask2 << 1;
    }    
}

int main(int argc, char const *argv[])
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter the first number\n");
    scanf("%d",&iValue1);

    printf("Enter the Second number\n");
    scanf("%d",&iValue2);

    CommonBits(iValue1, iValue2);
    printf("\n");

    return 0;
}
