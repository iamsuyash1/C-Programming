#include<stdio.h>

/*
    Write a program which accept string from user and copy that 
    characters of that string into another string by converting all small 
    characters into capital case.

    Input : “Marvellous Python 2”
    Output : “MARVELLOUS PYTHON 2”
*/

void strCpyCap(char *src, char *dest)
{
    while (*src != 0)
    {
        if (*src >= 'a' && *src<= 'z')
        {
            *src = (*src) - 32;
            *dest = *src;
            dest++;            
        }
        else
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
            
}
int main(int argc, char const *argv[])
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    strCpyCap(arr,brr);

    printf("%s\n",brr);

    return 0;
}
