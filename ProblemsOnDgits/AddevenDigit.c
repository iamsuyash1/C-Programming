//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
int AddEvenDigit(int);

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    int iValue = 0, iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet = AddEvenDigit(iValue);
    printf("Addition of even digits are : %d\n",iRet);
    return 0;
}

//========================================================================================================================================================================
//Helper.c

//  Accept number from user and return the Count of Number of even digits in the number

int AddEvenDigit(int iNo)
{
    int iSum = 0;
    int iDigit = 0;
    
    if (iNo < 0)       // Updater
    {
        iNo = -iNo;
    }
    while(iNo != 0)   //while (iNo > 0)   //O(N)   Where N is number of digits (N >= 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {

            iSum = iSum + iDigit;
        }
              
        iNo = iNo / 10;
    }
    return iSum;
}
