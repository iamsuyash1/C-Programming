#include<stdio.h>
/*
    Write a program which accept distance in kilometre and convert it into meter. (1 
    kilometre = 1000 Meter)

    Input : 5
    Output : 5000

    Input : 12
    Output : 12000
*/
#define PI 3.14

int KMtoMeter (int iNo )
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;

}
int main(int argc, char const *argv[])
{
    int iValue = 0;
    int iRet = 0.0;

    printf("Enter the Distance in Kilometer : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Distance in meter : %d\n",iRet);
    
    return 0;
}
