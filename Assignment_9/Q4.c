#include<stdio.h>
/*
    Accept number from user and display below pattern.

    Input : 4
    Output : # 1 * # 2 * # 3 * # 4 *
*/

void Pattern(int no)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= no; iCnt++)
    {
        printf("#   %d   *    ",iCnt);
    }
}

int main(int argc, char const *argv[])
{
    int iValue = 0; 
    printf("Enter the number of elements\n");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}
