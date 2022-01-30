
//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckSmall(char);
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter character\n");
    scanf("%c",&ch);
    bRet = CheckSmall(ch);
    if (bRet == true)
    {
        printf("It is Small\n");
    }
    else
        printf("Not Small\n");
    

    return 0;
}
//========================================================================================================================================================================
//Helper.c
bool CheckSmall(char c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        return true;
    }
    else
        return false;
}