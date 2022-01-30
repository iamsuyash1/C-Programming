//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd (int);   //DECLARATION

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    auto int iNo = 0;
    bool bRet= false;
    printf("Enter Number\n");
    scanf("%d",&iNo);

    bRet = CheckEvenOdd(iNo);                      //FUNCTION Call
    if (bRet == true)
    {
        printf("%d is Even Number\n",iNo);
    }
    else
    {
        printf("%d is Odd Number\n",iNo);
    }
       
    return 0;
}
//========================================================================================================================================================================
//Helper.c

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CheckEven
//      Input         : Integer
//      Output        : Boolean (true or false)
//      Description   : It is used to Check whether number is even or odd.
//      Author        : Suyash Maruti Saykar
//      Date          : 08/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm

    START
            Accept number as NO
            Perform CheckEven Function
            USE IF ELSE (NO % 2 == 0 : Even else Odd)     
            Store the result in RET
    STOP
*/

bool CheckEvenOdd(int n)                         //DEFINATION
{
    
    if (n%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//========================================================================================================================================================================


