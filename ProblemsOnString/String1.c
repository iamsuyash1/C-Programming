
//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//========================================================================================================================================================================
//Main.c
int main(int argc, char const *argv[])
{
    char Arr[11] = "Marvellous";
    
    printf("%s\n",&Arr[0]);     //  Marvellous
    printf("%s\n",&Arr[5]);     //  llous
    printf("%s\n",&Arr[9]);     //  s
    
    printf("%s\n",Arr);         //  Marvellous
    printf("%s\n",Arr+5);       //  llous
    printf("%s\n",Arr+9);       //  s

    return 0;
}
//========================================================================================================================================================================
//Helper.c

