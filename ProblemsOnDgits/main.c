//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
void Display();

//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    Display();
    return 0;
}


//========================================================================================================================================================================
//Helper.c

void Display()
{
    //Local variables
    int iNo = 7521;
    int iDigit = 0;

    iDigit = iNo % 10;      //Expression
    printf("%d\n",iDigit);  // 1
    iNo = iNo / 10;         //752

    iDigit = iNo % 10;      //2
    printf("%d\n",iDigit);  //2
    iNo = iNo / 10;         //75

    iDigit = iNo % 10;      //5
    printf("%d\n",iDigit);  //5
    iNo = iNo / 10;         //7

    iDigit = iNo % 10;      //7
    printf("%d\n",iDigit);  //7
    iNo = iNo/10;           //0 Terminating conditon


}



























