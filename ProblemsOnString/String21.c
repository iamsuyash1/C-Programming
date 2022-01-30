
//========================================================================================================================================================================
//Header.h 

// include"Header.h"
// To Compile - gcc Main.c Helper.c -o MyExe
// To Run -     ./MyExe

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CountFrequency(char* , char );
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char Arr[50], ch = '\0';
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a character\n");
    scanf(" %c",&ch);
   
    iRet = CountFrequency(Arr, ch);
    printf("Number of Vowels are : %d \n",iRet);
    
    return 0;
}
//========================================================================================================================================================================
//Helper.c
int CountFrequency(char *str, char ch )
{
    
    int iCnt = 0;

    if (*str == (int*)NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCnt++;
        }
        str++;
    }           
}