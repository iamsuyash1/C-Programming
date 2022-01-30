#include<stdio.h>

/*
    Accept number of rows and number of columns from user and display below 
    pattern.

    Input : iRow = 3 iCol = 5
    Output :    A A A A A
                B B B B B
                C C C C C
*/


void Pattern (int iRow, int iCol)
{
    int iR = 0, iC = 0;
    char ch = '\0';

    for(iR = 1, ch = 'A'; iR <= iRow; iR++, ch++)
    {
        for (iC = 1; iC <= iCol; iC++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and column\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}
