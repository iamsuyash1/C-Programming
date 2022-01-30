//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdbool.h>

void DisplayFactor (int);   //DECLARATION

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    auto int iNo = 0;

    printf("\nEnter Number\t");
    scanf("%d",&iNo);
    printf("\n");
    printf("Factors of %d are : \n",iNo);
    DisplayFactor(iNo);       
    return 0;
}
//========================================================================================================================================================================
//Helper.c

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : DisplayFactor
//      Input         : Integer
//      Output        : Integer
//      Description   : It is used to Find the factors of the given number.
//      Author        : Suyash Maruti Saykar
//      Date          : 08/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm

    START
            Accept number as NO
            Perform DisplayFactor Function :
                USE IF ELSE (NO % iCnt == 0 :--> Factors)     
            Store the result in RET
    STOP
*/

void DisplayFactor(int n)                         //DEFINATION
{
    int iCnt = 0;

    if(n<0)
    {
        n = -n;
    }
    
        for (iCnt = 1; iCnt <= n/2; iCnt++) //O(N/2) Time Complexity
        {
            if(n % iCnt == 0)
            {
                printf("%d\n",iCnt);    //iCnt as a factor
            }    
        }
}
//========================================================================================================================================================================
