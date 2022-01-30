/////////////////////////////////////////////////////////////
//
// Function name : Addition
// Input         : Integer, Integer
// Output        : Integer
// Description   : It is used to add 2 numbers
// Author        : Suyash Maruti Saykar
// Date          : 31/08/2021
//
/////////////////////////////////////////////////////////////

/*
    Algorithm

    START
        Accept first number as NO1
        Accept second number as NO2
        Perform addition of NO1 and NO2
        Store the result in RET
    STOP
*/
#include"Header.h"
int Addition(
                int iNo1, //First input argument (IN  : input parameter)
                int iNo2  //Second input argument (IN : input parameter)
            )
{
    int iResult = 0;       //Local variable to store result
    iResult = iNo1 + iNo2;

    return iResult;     //Return the value to the Caller
}