#include<stdio.h>

/*
    Write a program which accept string from user and copy small 
    characters of that string into another string.
    
    Input : “Marvellous multi OS”
    Output : “arvellous multi”
*/

void StrCpyX(char *src, char* dest)
{
    
    while (*src != '\0')
    {
        if (*src == ' ')
        {
            *dest = ' ';
            dest++;
        }
        if ((*src) >= 'a' && (*src)<= 'z')
        {           
            *dest = *src;
            dest++;
        }
        src++;
                       
    }    
}

int main(int argc, char const *argv[])
{
    char arr[30];
    char brr[30] = {'\0'};
    

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    

    StrCpyX(arr,brr);
    printf("%s\n",brr);

    return 0;
}
