//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(int, int);

int Power(int);

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    UINT iValue = 0, iBit = 0;
    bool bRet = false;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    printf("Enter Bit Number\n");
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

bool CheckBit(int iNo, int Bit)
{
    UINT iMask = Power(Bit);
    UINT iResult = 0;


    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return true;
    }
    else
        return false;
}

int Power(int x)
{
    x = x-1;
    int Result = 1;

    for (int i = 1; i <= x; i++)
    {
         Result *=2;
    }
    printf("Ans is : %d\n",Result);

    return Result;
}