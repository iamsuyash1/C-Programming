//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrome(int);

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    int iValue = 0;
    bool iRet = false;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet = CheckPalindrome(iValue);

    if (iRet == true)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Not Palindrom\n");
    }
    return 0;
}

//========================================================================================================================================================================
//Helper.c


bool CheckPalindrome(int iNo)
{
    int iTemp = iNo;
    int iRevNo = 0;
    int iDigit = 0;
    /*  
        while (iNo > 0)
      UPDATER should be used 
        if(iNo<0)
        {
            iNo = -iNo;
        }
    */
    while(iNo != 0)         
    {
        iDigit = iNo % 10;
        iRevNo = (iRevNo * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(iTemp == iRevNo)
    {
        return true;
    }
    else
    {
        return false;
    }   
}



























