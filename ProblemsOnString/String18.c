
//========================================================================================================================================================================
//Header.h 

// include"Header.h"
// To Compile - gcc Main.c Helper.c -o MyExe
// To Run -     ./MyExe

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CountSmallCapital(char *str );
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char ch[50];
    int iRet = '\0';

    printf("Enter String\n");
    scanf("%[^'\n']s",ch);
    CountSmallCapital(ch);
    
    return 0;
}
//========================================================================================================================================================================
//Helper.c
void CountSmallCapital(char *str )
{
    int iCnt1 = 0, iCnt2 = 0;
    
    while (*str !='\0')
    {
        if (*str>= 'A' && *str<='Z' )
        {
            iCnt1++;
        }
        else if (*str>= 'a' && *str<='z' )
        {
            iCnt2++;
        }

        str++;
    }
    printf("Capital Letters : %d\n",iCnt1);
    printf("Small letters :%d\n",iCnt2);
      
}