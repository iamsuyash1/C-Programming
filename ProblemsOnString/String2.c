#include<stdio.h>

int main(int argc, char const *argv[])
{
    char Arr[50];

    //printf("Enter your First name\n");
    //scanf("%s",Arr);
    //printf("Your Name is :%s\n",Arr);

    printf("Enter your full name :\n");
    scanf("%[^'\n']s",Arr);                 //regex expression
    printf("Your name is :%s\n",Arr);
    return 0;
}
