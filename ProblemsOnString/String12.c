
//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckDigit(char);
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter character\n");
    scanf("%c",&ch);
    bRet = CheckDigit(ch);
    if (bRet == true)
    {
        printf("It is Digit\n");
    }
    else
        printf("Not Digit\n");
    

    return 0;
}
//========================================================================================================================================================================
//Helper.c
bool CheckDigit(char c)
{
    if ((c >= '0') && (c <= '9'))
    {
        return true;
    }
    else
        return false;
}