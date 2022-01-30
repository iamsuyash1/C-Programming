#include<stdio.h>

void Swap (char *p, char *q)
{
    char temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main(int argc, char const *argv[])
{
    char ch1, ch2;

    printf("Enter first Character\n");
    scanf("%c",&ch1);

    printf("Enter Second Character\n");
    scanf(" %c",&ch2);

    printf("Before swapping characters are : %c  %c",ch1,ch2);

    Swap(&ch1, &ch2);

    printf("After swapping characters are : %c  %c",ch1,ch2);


    return 0;
}
