
//========================================================================================================================================================================
//Header.h 

// include"Header.h"
// To Compile - gcc Main.c Helper.c -o MyExe
// To Run -     ./MyExe

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void strevX(char*);
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
   
    strevX(Arr);
    
    printf("Reverse is:  %s\n",Arr);
    
    return 0;
}
//========================================================================================================================================================================
//Helper.c
void strevX(char *start)
{
    
    char *end = start;
    char temp;

    if (*start == (int*)NULL)
    {
       return;
    }
    while (*end != '\0')
    {
        end++;
    }
    end--;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;


        start++;
        end--;
    }
    

               
}