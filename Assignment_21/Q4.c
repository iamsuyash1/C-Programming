#include<stdio.h>
#include<stdbool.h>

/*
    Accept Character from user and check whether it is special symbol 
    or not (!, @, #, $, %, ^, &, *).

    Input : %
    Output : TRUE

    Input : d
    Output : FALSE
*/

bool ChkSpecial(char ch)
{
    if (ch == '!' || ch == '@' || ch =='#' || ch == '$' || 
        ch == '%' || ch == '^' || ch =='&' || ch == '*')
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

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == true)
    {
        printf("Special Character\n");
    }
    else
        printf("Not a Special Character\n");
    
    return 0;
}
