
//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

char ConvertToCapital(char );
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char ch = '\0';
    char cRet = '\0';

    printf("Enter character\n");
    scanf("%c",&ch);
    cRet = ConvertToCapital(ch);
    
    printf("Capital letter is: %c \n",cRet);

    return 0;
}
//========================================================================================================================================================================
//Helper.c
char ConvertToCapital(char c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        return c-32;
    }
    
}