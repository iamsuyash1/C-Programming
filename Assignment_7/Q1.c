#include<stdio.h>
/*
    Write a program which accept radius of circle from user and calculate its area. 
    Consider value of PI as 3.14. (Area = PI * Radius * Radius)

    Input : 5.3 
    Output : 88.2026

    Input : 10.4 
    Output : 339.6224
*/
#define PI 3.14

double CircleArea(float fR )
{
    double fArea = 0.0;

    fArea = PI * fR * fR;

    return fArea;

}
int main(int argc, char const *argv[])
{
    float fValue = 0.0;
    double fRet = 0.0;

    printf("Enter the Radius of the circle\n");
    scanf("%f",&fValue);

    fRet = CircleArea(fValue);
    printf("Area of circle is : %lf\n",fRet);
    
    return 0;
}
