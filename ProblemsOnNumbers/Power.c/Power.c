//========================================================================================================================================================================
//Header.h 

#include<stdio.h>

int Power(int,int);

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    int iValue1 = 0, iValue2 = 0, iRet = 0; 

    printf("Enter the two number\n");
    scanf("%d%d",&iValue1,&iValue2);
    iRet = Power(iValue1,iValue2);
    printf("Ans is %d\n",iRet);
    
}
//========================================================================================================================================================================
//Helper.c

int Power(int iNo1, int iNo2)
{
    int iCnt = 1;
    int iPower = 1;
   
    if(iNo2 < 0)
    {
        iNo2 = -iNo2;
    }
    while (iCnt<=iNo2)
    {
        iPower = iNo1*iPower;
        iCnt++;
    }

    return iPower;
    
}