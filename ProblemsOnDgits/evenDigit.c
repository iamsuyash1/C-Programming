//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
int CountEvenDigit(int);

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    int iValue = 0, iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet = CountEvenDigit(iValue);
    printf("Number of even digits are : %d\n",iRet);
    return 0;
}

//========================================================================================================================================================================
//Helper.c

//  Accept number from user and return the Count of Number of even digits in the number

int CountEvenDigit(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    if (iNo == 0)       //Filter
    {
        return 1;
    }
    if (iNo < 0)       // Updater
    {
        iNo = -iNo;
    }
    while(iNo != 0)   //while (iNo > 0)   //O(N)   Where N is number of digits (N >= 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
              
        iNo = iNo / 10;
    }
    return iCnt;
}
