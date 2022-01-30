#include<stdio.h>

/*
    Accept number of rows and number of columns from user and display below 
    pattern.

    Input : iRow = 4 iCol = 4
    Output :
            A B C D
            A B C D
            A B C D
            A B C D
*/


void Pattern (int iRow, int iCol)
{
    int iR = 0, iC = 0;

    for(iR = iRow; iR >= 1; iR--)
    {
        for (iC = 1; iC <= iCol; iC++)
        {
            printf("%d\t",iR);
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
