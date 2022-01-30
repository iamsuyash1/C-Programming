#include<stdio.h>
#include<stdbool.h>

/*
    Write a program which accept string from user and display it inn 
    reverse order.

    Input : “MarvellouS”
    Output : “SuollevraM”
*/

void ReverseX(char *str)
{
    char *start = NULL;
    start = str;
    char cTemp = '\0';
    char *end = NULL;
    end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;
    
    while (start < end)
    {
        cTemp = *start;
        *start = *end;
        *end = cTemp;
        start++;
        end--;       
    }
    printf("%s\n",str);    
}

int main(int argc, char const *argv[])
{
    char Arr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    ReverseX(Arr);
    
    return 0;
}
