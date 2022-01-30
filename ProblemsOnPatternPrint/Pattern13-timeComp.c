//========================================================================================================================================================================
//Header.h 

#include<stdio.h>

void Display(int,int);

//========================================================================================================================================================================
//Main.c

int main ()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and column\n");
    scanf("%d%d",&iValue1,&iValue2);
    Display(iValue1,iValue2);  

    return 0;
}
//========================================================================================================================================================================
//Helper.c

void Display(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;

    if (iRow != iCol)
    {
        return;
    }
    
    for(iCnt1 = 1; iCnt1 <= iRow ; iCnt1++)
    {   

        for( iCnt2 = 1; iCnt2 <= iCnt1; iCnt2++)
        {            
            printf("*\t");          
        }
        printf("\n\v");       
    }   
}

