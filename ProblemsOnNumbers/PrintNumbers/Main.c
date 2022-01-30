///////////////////////////////////////////////////////////
//
//  Accept nth number from user and print natural numbers upto nth.
//
///////////////////////////////////////////////////////////
#include"Header.h"

int main(int argc, char const *argv[])
{
    auto int no =0;
    printf("Enter number upto which you want to print natural numbers\n");
    scanf("%d",&no);
    PrintNumbers(no);

    return 0;
}
