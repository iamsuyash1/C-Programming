//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT, UINT);



//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    UINT iValue = 0, iBit = 0;
    bool bRet = false;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    printf("Enter Bit Position Number\n");
    scanf("%d",&iBit);

    bRet = CheckBit(iValue, iBit);

    if (bRet == true)
    {
        printf("%d bit is ON\n",iBit);
    }
    else
        printf("%d bit is OFF\n",iBit);   
    
    return 0;
}

//========================================================================================================================================================================
//Helper.c

bool CheckBit(UINT iNo, UINT Bit)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;
    Bit = Bit-1;
    iMask = iMask<<Bit;


    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return true;
    }
    else
        return false;
}

