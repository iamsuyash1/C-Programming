//=================================================================
//Header.h

#include<stdio.h>

void Display(int);                          //DECLARATION

//=================================================================
//Main.c

int main(int argc, char const *argv[])
{
    auto int iNo = 0;
    printf("Enter Number\n");    
    scanf("%d",&iNo);

    Display(iNo);                           //FUNCTION Call

    return 0;
}
//=================================================================
//Helper.c

void Display(int n)                         //DEFINATION
{
    for (register int i = 1; i <= n; i++)
    {
        printf("Marvellous\n");
    }    
}

//=================================================================


