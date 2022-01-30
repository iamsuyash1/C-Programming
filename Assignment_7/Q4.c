#include<stdio.h>
/*
    Write a program which accept temperature in Fahrenheit and convert it into 
    celsius. (1 celsius = (Fahrenheit -32) * (5/9))
    
    Input : 10
    Output : -12.2222 (10 - 32) * (5/9)

    Input : 34
    Output : 1.11111 (34 - 32) * (5/9)
*/


double FhtoCs (float fTemp )
{
   

   double dCelsius = ((float)5/9)*(fTemp-32);

    return dCelsius;

}
int main(int argc, char const *argv[])
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the Temperature in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    printf("Temperature in Celsius : %lf\n",dRet);
    
    return 0;
}
