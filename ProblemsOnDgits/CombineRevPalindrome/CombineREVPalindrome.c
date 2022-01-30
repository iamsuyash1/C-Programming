//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrome(int);
int ReverseNum (int);

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

int ReverseNum(int iNo)
{
    int iRevNo = 0;
    int iDigit = 0;
    
    while(iNo != 0)         
    {
        iDigit = iNo % 10;
        iRevNo = (iRevNo * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRevNo;
}


bool CheckPalindrome(int iINPUT)
{
    int iRevNo = 0;

    iRevNo = ReverseNum(iINPUT);
    if(iINPUT == iRevNo)
    {
        return true;
    }
    else
    {
        return false;
    }   
}



























