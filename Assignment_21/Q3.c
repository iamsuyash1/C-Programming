#include<stdio.h>

/*
    Accept character from user. If it is capital then display all the 
    characters from the input characters till Z. If input character is small 
    then print all the characters in reverse order till a. In other cases 
    return directly.

    Input : Q
    Output : Q R S T U V W X Y Z

    Input : m
    Output : m l k j i h g f e d c b a
    
    Input : 8
    Output :
*/

void Display(char ch)
{

    if(ch>='A' && ch<='Z')
    {
        for (char c = ch; c <= 'Z'; c++)
        {
            printf("%c\t",c);
        }
        
    }
    else if(ch>='a' && ch<='z')
    {
        for (char c = ch; c >= 'a'; c--)
        {
            printf("%c\t",c);
        }
    }
    else
    {
        return;
    }
}

int main(int argc, char const *argv[])
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}
