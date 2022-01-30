//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
//       qualifier   modifier   dat type     new name
typedef  unsigned    long         int         UINT;      

UINT Factorial(int);   //DECLARATION

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    auto int iNo = 0;
    UINT iRet=0;
    printf("\nEnter Number\t");
    scanf("%d",&iNo);

    iRet = Factorial(iNo);                      //FUNCTION Call
    printf("factorial of %d is : %lu\n",iNo,iRet);    
    return 0;
}
//========================================================================================================================================================================
//Helper.c

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Factorial
//      Input         : Integer
//      Output        : Integer
//      Description   : It is used to find the factorial
//      Author        : Suyash Maruti Saykar
//      Date          : 07/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm

    START
            Accept number as NO
            Perform Factorial Function
                USE Loop
                    // Starting point : Counter = 1
                    // Ending point   : n
                    // Displacement   : 1
                        FACTORIAL = FACTORIAL*Counter
            Store the result in RET
    STOP
*/

UINT Factorial(int n)                         //DEFINATION
{
    UINT iFact = 1; 
    int iCnt = 0;
    if(n == 0)
    {
        return 0;
    }
    if(n < 0)   //Input updater
    {
        n = -n;
    }
    iCnt = 1 ; 
    while (iCnt <= n)
    {
        iFact*=iCnt;
        iCnt++;
    }    
    return iFact;
}
//========================================================================================================================================================================


