#include<stdio.h>
#include<stdbool.h>

/*
    Write a program which accept string from user and accept one 
    character. Return frequency of that character.

    Input : “Marvellous Multi OS”
    M
    Output : 2

    Input : “Marvellous Multi OS”
    W
    Output : 0
*/

int CheckCharFreq(char *str, char ch)
{
    int iCnt = 0;

    while (*str!='\0')
    {
        if (*str == ch)
        {
            iCnt++;
        }
        str++;       
    }
    return iCnt;
}

int main(int argc, char const *argv[])
{
    char Arr[20]; char cValue = '\0';
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = CheckCharFreq(Arr,cValue);
    printf("%d\n",iRet);

    return 0;
}
