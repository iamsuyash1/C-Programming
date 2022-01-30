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

bool CheckSmallCase(char ch)
{
    if ((ch >= 'a' && ch<='z'))
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

    bRet = CheckSmallCase(cValue);
    if (bRet == true)
    {
        printf("Small Case Character\n");
    }
    else
    {
        printf("Not Small Case Character\n");
    }        
    return 0;
}

