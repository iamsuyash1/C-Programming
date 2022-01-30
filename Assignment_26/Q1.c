#include<stdio.h>

/*
     Write a program which accept string from user and copy that 
    characters of that string into another string in reverse order.

    Input : “Marvellous Python”
    Output : “nohtyP suollevraM”
*/

void strCpyRev(char *src, char *dest)
{
    char *end = NULL;
    end = src;

    while (*end != 0)
    {
        end++;
    }
    end--;

    while (*src != 0)
    {
        *dest = *end;
        dest++;
        end--;
        src++;
    }      
}
int main(int argc, char const *argv[])
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    strCpyRev(arr,brr);

    printf("%s\n",brr);

    return 0;
}
