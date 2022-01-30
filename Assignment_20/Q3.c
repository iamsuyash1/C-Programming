#include<stdio.h>
#include<stdbool.h>

/*
    Accept Character from user and check whether it is digit or not 
    (0-9).
    
    Input : 7
    Output : TRUE

    Input : d
    Output : FALSE
*/

bool CheckDigit(char ch)
{
    if ((ch >= '0' && ch<='9'))
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

    bRet = CheckDigit(cValue);
    if (bRet == true)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("Not a Digit\n");
    }        
    return 0;
}

