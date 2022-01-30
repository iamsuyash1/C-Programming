//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
int RevNUM(int);

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet = RevNUM(iValue);

    printf("Reverse number is %d\n",iRet);
    return 0;
}

//========================================================================================================================================================================
//Helper.c

int RevNUM(int iNo)
{
    int iDigit = 0;
    int iRevNo = 0;

    

    while(iNo != 0)//while (iNo > 0) for this --> have to use updater for negative number
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iRevNo = (iRevNo * 10) + iDigit;
        iNo = iNo / 10;
    }

    return iRevNo;
}



























