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
    char cTemp = '\0';
    char *end = NULL;
    end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;
    
    while (str < end)
    {
        cTemp = *str;
        *str = *end;
        *end = cTemp;
        str++;
        end--;       
    }
}

int main(int argc, char const *argv[])
{
    char Arr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    ReverseX(Arr);
    printf("%s\n",Arr);
    return 0;
}
