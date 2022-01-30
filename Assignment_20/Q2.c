#include<stdio.h>
#include<stdbool.h>

/*
    Accept Character from user and check whether it is capital or not 
    (A-Z).
    
    Input : F
    Output : TRUE
    
    Input : d
    Output : FALSE
*/

bool CheckCapital(char ch)
{
    if ((ch >= 'A' && ch<='Z'))
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

    bRet = CheckCapital(cValue);
    if (bRet == true)
    {
        printf("Capital Character\n");
    }
    else
    {
        printf("Not capital Character\n");
    }        
    return 0;
}

