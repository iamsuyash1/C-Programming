#include<stdio.h>
#include<stdbool.h>

/*
   Write a program which accept string from user and toggle the case.

    Input : “Marvellous Multi OS”
    Output : mARVELLOUS mULTI os
*/

void strToggleX(char *str)
{   
    char *stemp = NULL;
    stemp = str; 
    while (*stemp != '\0')
    {
        if ( (*stemp) >= 'a' && (*stemp) <='z')
        {
            *stemp = *stemp-32;
        }
        else if ( (*stemp) >= 'A' && (*stemp) <='Z')
        {
            *stemp = *stemp+32;
        }     
        stemp++;  
    }
    printf("%s\n",str);   
}

int main(int argc, char const *argv[])
{
    char Arr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    strToggleX(Arr);
    
    return 0;
}
