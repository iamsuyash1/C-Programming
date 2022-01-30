#include<stdio.h>
/*
    Write a program which accept area in square feet and convert it into square 
    meter. (1 square feet = 0.0929 Square meter)
    
    Input : 5
    Output : 0.464515

    Input : 7
    Output : 0.650321
*/


double SquareMeter (double SqFeet )
{
   

    double dSqMeter =  (0.092903) * SqFeet;

    return dSqMeter;

}
int main(int argc, char const *argv[])
{
    double fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the Area in square feet : \n");
    scanf("%lf",&fValue);

    dRet = SquareMeter(fValue);
    printf("Area in Square Meter : %lf\n",dRet);
    
    return 0;
}
