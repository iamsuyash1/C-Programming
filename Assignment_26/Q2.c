#include<stdio.h>

/*
    Write a program which accept string from user and copy that 
    characters of that string into another string by removing all white 
    spaces.

    Input : “Marvel lous Pyth on”
    Output : “MarvellousPython”
*/

void strCpyX(char *src, char *dest)
{
    while (*src != 0)
    {
        if (*src != ' ')
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

    strCpyX(arr,brr);

    printf("%s\n",brr);

    return 0;
}
