
//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef unsigned int UNIT;
UNIT strlnX(char*);
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char Arr[50];
    UNIT sRet = 0;
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    sRet = strlnX(Arr);
    printf("Length of string is: %d\n",sRet); 

    return 0;
}
//========================================================================================================================================================================
//Helper.c
UNIT strlnX(char *str)
{
    UNIT iCnt = 0;

    if(str == NULL)
    {
        return 0;
    }   

    while (*str != '\0')
    {
        printf("%c\n",*str);
        str++; 
        iCnt++;
    }
    return iCnt;
}

