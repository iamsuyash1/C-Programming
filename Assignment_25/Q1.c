#include<stdio.h>

/*
    Write a program which accept string from user and copy the 
    contents of that string into another string. (Implement strcpy() 
    function)

    Input : “Marvellous Multi OS”
    Output : “Marvellous Multi OS” in another string
*/

void StrCpyX(char *src, char* dest)
{
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }    
}

int main(int argc, char const *argv[])
{
    char arr[30];
    char brr[30];

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    StrCpyX(arr,brr);
    printf("%s\n",brr);

    return 0;
}
