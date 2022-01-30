//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT, UINT, UINT);



//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    UINT iValue = 0, iBit1 = 0, iBit2 = 0;
    bool bRet = false;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    printf("Enter 1st Bit Position Number\n");
    scanf("%d",&iBit1);

    printf("Enter 2nd Bit Position Number\n");
    scanf("%d",&iBit2);

    bRet = CheckBit(iValue, iBit1, iBit2);

    if (bRet == true)
    {
        printf("%d & %d bit is ON\n",iBit1, iBit2);
    }
    else
        printf("%d & %d bit is OFF\n",iBit1, iBit2);   
    
    return 0;
}

//========================================================================================================================================================================
//Helper.c

bool CheckBit(UINT iNo, UINT Bit1,UINT Bit2)
{
    UINT iMask1 = 0x00000001;
    UINT iMask2 = 0x00000001;
    UINT iMaskFinal = 0x00000000;
    UINT iResult = 0;
    Bit1 = Bit1-1;
    Bit2 = Bit2-1;
    
    iMask1 = iMask1<<Bit1;
    iMask2 = iMask2<<Bit2;

    iMaskFinal = iMask1 | iMask2;


    iResult = iNo & iMaskFinal;

    if (iResult == iMaskFinal)
    {
        return true;
    }
    else
        return false;
}

