//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdbool.h>
bool CheckBit4(int);

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    int iValue = 0;
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
    int iDigit = 0;
    int iCnt = 1;


    while (iNo != 0)
    {
       iDigit = iNo % 2;
       iCnt++;
       if(iCnt == 4  && iDigit==0)
       {
           break;
       }
       iNo = iNo / 2;

    }
    if(iCnt == 4)
    {
        return true;
    }
    else
        return false;
}
