#include<stdio.h>
/*
Accept one character from user and convert case of that character. 
Input : a Output : A 
Input : D Output : d
     
*/
char ConvertChar(char ch)
{
    char Convert;
    if(ch>= 'a' && ch<= 'z')
    {
        Convert = ch - 32;
        printf("Capital letter is %c\n",Convert);
    }
    else
    {
        Convert = ch + 32;
        printf("Small letter is %c\n",Convert);
    }
}   
int main(int argc, char const *argv[])
{
    char iValue = '\0';
    char cRet = '\0';
    printf("Enter character\n");
    scanf("%c",&iValue);

    ConvertChar(iValue);
    return 0;
}
    


