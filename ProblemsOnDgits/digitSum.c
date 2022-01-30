//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
int Display(int);

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    int iValue = 0, iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet = Display(iValue);
    printf("Sum of digit is : %d\n",iRet);
    return 0;
}

//========================================================================================================================================================================
//Helper.c

//  Accept number from user and return the addition of the digits of the number

int Display(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

     if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)         //while (iNo > 0)
    {
        iDigit = iNo % 10;
        iSum += iDigit;      
        iNo = iNo / 10;
    }
    return iSum;
}


/*
    D R Y   R U N

    iNo = 954;  -->
    int Display (int iNo);

    iDigit = 0;
    iSum  =  0;

    now --> IN while LOOP

                iDigit = iNo % 10; --> iDigit = 4
                iSum = iSum + iDigit --> iSum = 0 + 4  --> 4
                iNo = iNo / 10; -->  954 / 10 = 95 --> iNo 95

                iDigit = iNo % 10; --> 95 % 10 --> iDigit = 5
                iSum = iSum + iDigit --> iSum = 4 + 5  --> 9
                iNo = iNo / 10; -->  95 / 10 = 9 --> iNo 9

                iDigit = iNo % 10; --> 9 %iDigit = 4
                iSum = iSum + iDigit --> iSum = 0 + 4  --> 4
                iNo = iNo / 10; -->  954 / 10 = 95 --> iNo 95




*/



























