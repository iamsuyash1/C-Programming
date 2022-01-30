//========================================================================================================================================================================
//Header.h 

#include<stdio.h>

int SumOfnthNum(int);   //DECLARATION

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    auto int iNo = 0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iNo);

    iRet = SumOfnthNum(iNo);                      //FUNCTION Call
    printf("Sum of first %d natural number is : %d\n",iNo,iRet);    
    return 0;
}
//========================================================================================================================================================================
//Helper.c

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : SumOfnthNum
//      Input         : Integer
//      Output        : Integer
//      Description   : It is used to find the Sum of nth natural numbers
//      Author        : Suyash Maruti Saykar
//      Date          : 07/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm

    START
            Accept number as NO
            Perform SumOfnthNum Function
                USE Loop
                    // Starting point : Counter = 1
                    // Ending point   : n
                    // Displacement   : 1
                        SumOfnthNum = SumOfnthNum + Counter
            Store the result in RET
    STOP
*/

int SumOfnthNum(int n)                         //DEFINATION
{
    int iSum = 0; 
    int iCnt = 0;
    if(n == 0)
    {
        return 0;
    }
    if(n < 0)   //Input updater
    {
        n = -n;
    }
    for (iCnt = 1 ; iCnt <= n; iCnt++)
    {
        iSum+=iCnt;
    }    
    return iSum;
}
//========================================================================================================================================================================


