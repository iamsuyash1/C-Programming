
//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CountSmall(char *str );
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char ch[50];
    int iRet = '\0';

    printf("Enter String\n");
    scanf("%[^'\n']s",ch);
    iRet = CountSmall(ch);
    
    printf("Small letter Count is: %d\n",iRet);
    return 0;
}
//========================================================================================================================================================================
//Helper.c
int CountSmall(char *str )
{
    int iCnt = 0;
    
    while (*str !='\0')
    {
        if (*str>= 'a' && *str<='z' )
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
      
}