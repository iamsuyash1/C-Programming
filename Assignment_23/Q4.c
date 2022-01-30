#include<stdio.h>
#include<stdbool.h>

/*
   Write a program which accept string from user and toggle the case.

    Input : “Marvellous Multi OS”
    Output : mARVELLOUS mULTI os
*/

void DisplayDigit(char *str)
{   
    char *stemp = NULL;
    stemp = str; 
    while (*stemp != '\0')
    {
        if ( (*stemp) >= '0' && (*stemp) <='9')
        {
            printf("%c",*stemp);
        }     
        stemp++;  
    }
    printf("\n");       
}

int main(int argc, char const *argv[])
{
    char Arr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);
    
    return 0;
}
