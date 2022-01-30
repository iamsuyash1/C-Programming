#include<stdio.h>
#include<stdbool.h>

/*
    Write a program which accept string from user and check whether 
    it contains vowels in it or not.

    Input : “marvellous”
    Output : TRUE
    Input : “Demo”
    Output : TRUE
    Input : “xyz”
    Output : FALSE
*/

bool CheckVowels(char *str)
{
    while (*str!='\0')
    {
        if (*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' || 
            *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
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
    char Arr[20];
    bool bRet = false;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckVowels(Arr);
    if (bRet == true)
    {
        printf("TRUE\n");
    }
    else
        printf("FALSE\n");
    
    return 0;
}
