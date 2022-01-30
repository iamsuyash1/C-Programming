// Starting point : n
// Ending point   : 1
// Displacement   : 1

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
    if(n == 0)
    {
        printf("You Entered 0\n");
        return;
    }
    if(n < 0)   //Input updater
    {
        n = -n;
    }
    for (register int i = n ; i > 0; i--)
    {
        printf("%d\n",i);
    }    
}

//=================================================================


