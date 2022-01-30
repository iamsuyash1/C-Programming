
//========================================================================================================================================================================
//Header.h 

// include"Header.h"
// To Compile - gcc Main.c Helper.c -o MyExe
// To Run -     ./MyExe

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CountVowels(char *str );
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char ch[50];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",ch);
    if (*ch == NULL)
    {
        return -1;
    }
    
    iRet = CountVowels(ch);
    printf("Number of Vowels are : %d \n",iRet);
    
    return 0;
}
//========================================================================================================================================================================
//Helper.c
int CountVowels(char *str )
{
    int iCnt1 = 0;
    
    while (*str !='\0')
    {
        if ((*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U') || 
        
            (*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u') )
        {
            iCnt1++;
        }       
        str++;
    }
    return iCnt1;
      
}