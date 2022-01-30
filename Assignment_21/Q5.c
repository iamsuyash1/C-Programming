#include<stdio.h>
#include<stdbool.h>

/*
    Accept character from user and display its ASCII value in decimal, 
    octal and hexadecimal format.
    
    Input : A
    Output : 
            Decimal 65
            Octal 0101
            Hexadecimal 0X41

*/

void Display(char ch)
{
    printf("Decimal : %d\nOctal : %o\nHexadecimal : 0X%x\n",ch,ch,ch);
}

int main(int argc, char const *argv[])
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}
