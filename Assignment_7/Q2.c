#include<stdio.h>
/*
    Write a program which accept width & height of rectangle from user and calculate 
    its area. (Area = Width * Height

    Input : 5.3 9.78
    Output : 51.834
*/


double RectArea(float fW, float fH )
{
    double fArea = 0.0;

    fArea = fW * fH;

    return fArea;

}
int main(int argc, char const *argv[])
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double fRet = 0.0;

    printf("Enter the Height of rectangle \n");
    scanf("%f",&fValue1);

    printf("Enter the Width of rectangle \n");
    scanf("%f",&fValue2);

    fRet = RectArea(fValue1, fValue2);
    printf("Area of Rectangle is : %lf\n",fRet);
    
    return 0;
}
