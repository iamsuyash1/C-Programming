#include<stdio.h>

/*
    Write a program which accept string from user and copy the 
    contents of that string into another string. (Implement strncpy() 
    function)

    Input : “Marvellous Multi OS”
    10
    Output : “Marvellous
*/

void StrCpyX(char *src, char* dest, int iCnt)
{
    int iTemp = 0;
    while (*src != '\0' && iTemp!=iCnt+1 )
    {
        iTemp++;
        *dest = *src;
        src++;
        dest++;
        
    }    
}

int main(int argc, char const *argv[])
{
    char arr[30];
    char brr[30] = {'\0'};
    int NumOfChar = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the number of characters to print\n");
    scanf("%d",&NumOfChar);

    StrCpyX(arr,brr,NumOfChar);
    printf("%s\n",brr);

    return 0;
}
