#include<stdio.h>

/*
    Accept number of rows and number of columns from user and 
    display below pattern.

    Input : iRow = 4 iCol = 4
    Output : 
                1 2 3 4 5
                1  2    5
                1   3   5
                1     4 5
                1 2 3 4 5
*/

void Pattern(int iRow, int iCol)
{
    int iR = 1, iC = 1;

    for(iR = 1; iR <= iRow; iR++)
    {
        for(iC = 1; iC <= iCol; iC++)
        {
            if (iR==iC || iR==1 || iR==iRow || iC==1 || iC==iCol)
            {
                printf("%d\t",iC);            
            }
            else
                printf(" \t");
        }
        printf("\v\n");
    }
}

int main(int argc, char const *argv[])
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}


