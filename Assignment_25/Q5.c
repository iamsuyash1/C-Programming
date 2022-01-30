#include<stdio.h>

/*
    Write a program which 2 strings from user and concat second string 
    after first string. (Implement strcat() function).

    Input : “Marvellous Infosystems”
    “Logic Building”
    Output : “Marvellous Infosystems Logic Building”
*/

void StrCatX(char *src, char* dest)
{ 
    while (*src != '\0')
    {
        src++;                       
    }
    *src = ' ';
    src++;    
    while (*dest != '\0')
    {
        *src = *dest;   
        src++;
        dest++;
    }
}

int main(int argc, char const *argv[])
{
    char arr[60] = {'\0'};
    char brr[30] = {'\0'};
    

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the second string\n");
    scanf(" %[^'\n']s",brr);

    StrCatX(arr,brr);
    printf("%s\n",arr);

    return 0;
}
