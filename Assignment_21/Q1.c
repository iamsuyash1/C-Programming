#include<stdio.h>

/*
    Write a program which displays ASCII table. Table contains symbol, 
    Decimal, Hexadecimal and Octal representation of every member from 
    0 to 255.
*/

void DisplayASCII()
{
    int i = 0;

    printf("Symbol      Decimal     Hexadecimal         Octal\n");
    for ( i = 0; i <= 255 ; i++)
    {
        printf("%c              %d              %x                  %o\n",i,i,i,i);
    }
    
}
int main(int argc, char const *argv[])
{
    DisplayASCII();
    return 0;
}
