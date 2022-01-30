//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit4(int);

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet = CheckBit4(iValue);

    if (bRet == true)
    {
        printf("4th bit is ON\n");
    }
    else
        printf("4bit is OFF\n");   
    
    return 0;
}

//========================================================================================================================================================================
//Helper.c

bool CheckBit4(int iNo)
{
    UINT iMask = 0x00000008;
    UINT iResult = 0;


    iResult = iNo & iMask;

    if (iResult == 8)
    {
        return true;
    }
    else
        return false;
}
