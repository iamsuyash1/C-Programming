#include<stdio.h>

int main(int argc, char const *argv[])
{
    int iValue = 0;


    printf("Enter Number\n");
    scanf("%d",&iValue);

    printf("\nIn Decimal : %d\nIn Hexadecimal : %x\nIn Octal : %o\n",iValue, iValue,iValue);
    return 0;
}
