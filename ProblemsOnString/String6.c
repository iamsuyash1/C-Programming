
//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void Display(char*);
//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char Arr[50];
    printf("Enter your name:\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr); 

    return 0;
}
//========================================================================================================================================================================
//Helper.c
void Display(char *Brr)
{
    int iCnt = 0;

    while (*Brr != '\0')
    {
        printf("%c\n",*Brr);
        Brr++; 
        iCnt++;
    }
    
}

