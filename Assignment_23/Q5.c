#include<stdio.h>

/*
    Write a program which accept string from user and count number of 
    white spaces

    Input : “MarvellouS”
    Output : 0

    Input : “MarvellouS Infosystems”
    Output : 1

    Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
    Output : 5
*/

int CountWhiteSpaces(char *str)
{
    int iCnt = 0;

    while (*str!='\0')
    {
        if ((*str == ' '))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main(int argc, char const *argv[])
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhiteSpaces(Arr);
    printf("%d\n",iRet);
    return 0;
}
