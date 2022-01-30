//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdbool.h>
bool CheckPerfectNo(int);
int SumFactor(int);

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    int iValue = 0; 
    bool iRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet = CheckPerfectNo(iValue);
    if (iRet == true)
    {
        printf("Number is perfect\n");
    }
    else
    {
        printf("Not perfect\n");
    }
    
    return 0;
}

//========================================================================================================================================================================
//Helper.c

//  Accept number from user and Check whether number is perfect or not

bool CheckPerfectNo(int iNo)
{   
    if (iNo < 0)        //UPDATER
    {
        iNo = -iNo;
    }
    
    int iSum = 0;
    
    for (register int iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    

    if (iNo == iSum)
    {
        return true;
    }
    else
    {
        return false;
    }     
}
