#include<stdio.h>

/*
    Accept number of rows and number of columns from user and display below 
    pattern.

    Input : iRow = 4 iCol = 4
    Output :    A B C D
                a b c d
                A B C D
                a b c d
*/


void Pattern (int iRow, int iCol)
{
    int iR = 0, iC = 0;
    char ch = '\0', ch2 = '\0';

    for(iR = 1; iR <= iRow; iR++)
    {
        for (iC = 1, ch = 'A', ch2 = 'a'; iC <= iCol; iC++, ch++, ch2++)
        {
            if (iR % 2 == 0)
            {
                printf("%c\t",ch2);
            }
            else
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