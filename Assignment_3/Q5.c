#include<stdio.h>
#define TRUE 1
#define FALSE 0

/*
    Accept on character from user and check 
    whether that character is vowel 
    (a,e,i,o,u) or not.
*/

typedef int BOOL;

BOOL CheckVowel(char ch)
{
    if  (   ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U'
        )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main(int argc, char const *argv[])
{
    char cValue = '\0';
    BOOL Bret = FALSE;

    printf("Enter the character \n");
    scanf("%c",&cValue);

    Bret = CheckVowel(cValue);

    if (Bret == TRUE)
    {
        printf("It is a vowel \n ");
    }
    else
    {
        printf("It is not a vowel \n ");
    }

    return 0;
}
