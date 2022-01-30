#include<stdio.h>

/*
    Write a program which accept string from user and count number of 
    capital characters.

    Input : “Marvellous Multi OS”
    Output : 4
*/

int CountCapital(char *str)
{
    int iCnt = 0;

    while (*str!='\0')
    {
        if ((*str>='A') && (*str<='Z'))
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

    iRet = CountCapital(Arr);
    printf("%d\n",iRet);
    return 0;
}
