#include<stdio.h>
#include<stdbool.h>

/*
    Write a program which accept string from user and accept one 
    character. Return index of first occurrence of that character.

    Input : “Marvellous Multi OS”
    M
    Output : 0

    Input : “Marvellous Multi OS”
    W
    Output : -1

    Input : “Marvellous Multi OS”
    e
    Output : 4
*/

int CheckFirstIndex(char *str, char ch)
{
    int iCnt = -1;
    int iTemp = 0;

    while (*str!='\0')
    {
        iCnt++;
        if (*str == ch)
        {
            iTemp = iCnt;
            break;
        }
        str++;       
    }
    return iTemp;
}

int main(int argc, char const *argv[])
{
    char Arr[20]; char cValue = '\0';
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = CheckFirstIndex(Arr,cValue);
    printf("%d\n",iRet);

    return 0;
}
