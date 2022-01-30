
//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckCapital(char);
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter character\n");
    scanf("%c",&ch);
    bRet = CheckCapital(ch);
    if (bRet == true)
    {
        printf("It is Capital\n");
    }
    else
        printf("Not Capital\n");
    

    return 0;
}
//========================================================================================================================================================================
//Helper.c
bool CheckCapital(char c)
{
    if ((c >= 'A') && (c <= 'Z'))
    {
        return true;
    }
    else
        return false;
}