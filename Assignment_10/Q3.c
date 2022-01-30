#include<stdio.h>

/*
    Accept number of rows and number of columns from user and display 
    below pattern.

    Input : iRow = 3 iCol = 5
    Output :    
                5 4 3 2 1
                5 4 3 2 1
                5 4 3 2 1
*/

void Pattern (int no1, int no2)
{
    int iCnt1 = 0, iCnt2 = 0;

    for(iCnt1 = 1; iCnt1 <= no1; iCnt1++)
    {
        for(iCnt2 = no2; iCnt2 > 0; iCnt2--)
        {
            printf("%d\t",iCnt2);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
     int iRow = 0, iColumn = 0; 

     printf("Enter the number of rows and column\n");
     scanf("%d%d",&iRow, &iColumn);
     Pattern(iRow, iColumn);
    return 0;
}
