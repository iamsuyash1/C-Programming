///////////////////////////////////////////////////////////////
//  
//  Dislay natural numbers upto nth number
//  Function name : PrintNumbers
//  Input         : Integer
//  Output        : Natural Numbers
//  Description   : It is used to print nth natural numbers.
//  Author        : Suyash Maruti Saykar
//  Date          : 06/09/2021
//  
//  To print-
//           C          :     printf()  command - gcc <filename> -o myexe
//           C++        :     cout<<    command - g++ <filename> -o myexe
//           python     :     print()
//           Java       :     System.out.println()
//           Javascript :     console.log()
//           Typescript :     console.log()
//
///////////////////////////////////////////////////////////////

// Starting point : 1
// Ending point   : n
// Displacement   : 1

#include"Header.h"
void PrintNumbers(int n)
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

    for(register int i=1; i<=n ; i++)
    {
        printf("%d\n",i);
    }
}

/*
int main(int argc, char const *argv[])
{
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    return 0;
}
*/