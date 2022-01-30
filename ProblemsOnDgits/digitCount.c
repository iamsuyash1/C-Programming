//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
int CountDigit(int);

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    int iValue = 0, iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet = CountDigit(iValue);
    printf("Number of digits are : %d\n",iRet);
    return 0;
}

//========================================================================================================================================================================
//Helper.c

//  Accept number from user and return the Count of Number of digits in the number

int CountDigit(int iNo)
{
    //int iDigit = 0;
    int iCnt = 0;

    if (iNo == 0)       //Filter
    {
        return 1;
    }
    if (iNo < 0)       // Updater
    {
        iNo = -iNo;
    }
    while(iNo != 0)         //while (iNo > 0)
    {
        //iDigit = iNo % 10;
        iCnt++;      
        iNo = iNo / 10;
    }
    return iCnt;
}
