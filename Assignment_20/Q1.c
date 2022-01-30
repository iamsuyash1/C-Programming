#include<stdio.h>
#include<stdbool.h>

/*
    Accept Character from user and check whether it is alphabet or not 
    (A-Z a-z).

    Input : F
    Output : TRUE
    Input : &
    Output : FALSE
*/

bool CheckAlpha(char ch)
{
    if ((ch >= 'A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        return true;
    }
    else
        return false;   
}
int main(int argc, char const *argv[])
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character \n");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);
    if (bRet == true)
    {
        printf("TRUE Character\n");
    }
    else
    {
        printf("Not Character\n");
    }        
    return 0;
}

