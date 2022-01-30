#include<stdio.h>
#include<stdbool.h>

/*
    Write a program which accept string from user and accept one 
    character. Check whether that character is present in string or not.
    
    Input : “Marvellous Multi OS”
    e
    Output : TRUE

    Input : “Marvellous Multi OS”   
    W
    Output : FALSE
*/

bool CheckChar(char *str, char ch)
{
    while (*str!='\0')
    {
        if (*str == ch)
        {
            break;
        }
        str++;       
    }
    if (*str == '\0')
    {
        return false;
    }
    else
        return true;
}

int main(int argc, char const *argv[])
{
    char Arr[20]; char cValue = '\0';
    bool bRet = false;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr,cValue);
    if (bRet == true)
    {
        printf("TRUE\n");
    }
    else
        printf("FALSE\n");
    
    return 0;
}
