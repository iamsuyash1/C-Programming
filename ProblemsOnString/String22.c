
//========================================================================================================================================================================
//Header.h 

// include"Header.h"
// To Compile - gcc Main.c Helper.c -o MyExe
// To Run -     ./MyExe

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindromeString(char*);
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char Arr[50];
    bool bRet = false;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
   
    bRet = CheckPalindromeString(Arr);
    if (bRet==true)
    {
        printf("String is palindrome\n");
    }
    else
        printf("Not Palindrome\n");
    
    
    return 0;
}
//========================================================================================================================================================================
//Helper.c
bool CheckPalindromeString(char *str)
{
    char *start = NULL;
    char *end = NULL;

    
    start = str;
    end = str;
    
    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {        
        if (*start != *end)
        {
            break;
        }
        
        start++;
        end--;               
    }
    if (start < end)
    {
        return false;
    }
    else
        return true;
    
            
}