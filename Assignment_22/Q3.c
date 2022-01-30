#include<stdio.h>

/*
    Write a program which accept string from user and return 
    difference between frequency of small characters and frequency of 
    capital characters.

    Input : “MarvellouS”
    Output : 6 (8-2)
*/

int CountDiffCapitalSmall(char *str)
{
    int iCap = 0, iSmall = 0;

    while (*str!='\0')
    {
        if ((*str>='A') && (*str<='Z'))
        {
            iCap++;
        }
        
        if ((*str>='a') && (*str<='z'))
        {
            iSmall++;
        }
        str++;
    }
    return iSmall - iCap;
}

int main(int argc, char const *argv[])
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountDiffCapitalSmall(Arr);
    printf("%d\n",iRet);
    return 0;
}
