#include<stdio.h>
#include<stdbool.h>

/*
    Write a program which accept string from user and convert it into 
    lower case.

    Input : “Marvellous Multi OS”   
    Output : marvellous multi os
*/

void strlowerX(char *str)
{   
    char *stemp = NULL;
    stemp = str; 
    while (*stemp != '\0')
    {
        if ( (*stemp) >= 'A' && (*stemp) <='Z')
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

    strlowerX(Arr);
    
    return 0;
}
