//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit4and7(int);

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet = CheckBit4and7(iValue);

    if (bRet == true)
    {
        printf("4 & 7 th bit is ON\n");
    }
    else
        printf("4 & 7th bit is OFF\n");   
    
    return 0;
}

//========================================================================================================================================================================
//Helper.c

bool CheckBit4and7(int iNo)
{
    UINT iMask = 0x00000048;
    UINT iResult = 0;


    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return true;
    }
    else
        return false;
}
