#include<stdio.h>

/*
    Write a program which accept string from user and copy that 
    characters of that string into another string by toggling the case.

    Input : “Marvellous Python 2”
    Output : “mARVELLOUS pYTHON 2”
*/

void strCpyToggle(char *src, char *dest)
{
    while (*src != 0)
    {
        if (*src >= 'A' && *src<= 'Z')
        {
            *src = (*src) + 32;
            *dest = *src;
            dest++;            
        }
        else if(*src >= 'a' && *src<= 'z')
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

    strCpyToggle(arr,brr);

    printf("%s\n",brr);

    return 0;
}
