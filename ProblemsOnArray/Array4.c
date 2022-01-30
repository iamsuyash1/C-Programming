//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
float Average(int*,int);
//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    
    int iSize = 0;
    float fRet = 0.0f;
    int *ptr = NULL;

    ptr = (int*) malloc(iSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not Allocated\n");
        return -1;
    }
    

    printf("Enter the size of array \n");
    scanf("%d",&iSize);
    printf("Enter the elements of the array\n");

    for ( int iCnt = 0; iCnt < iSize; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]); 
    }   

    fRet = Average(ptr,iSize);
    printf("Average is : %.2f\n",fRet);

    free(ptr);
        
    return 0;
}
//========================================================================================================================================================================
//Helper.c

float Average(int *Brr,int size)
{
    int iCnt = 0, iSum = 0; 
    float fAvg = 0.0f;
    
    for (int iCnt = 0; iCnt < size ; iCnt++)
    {
        iSum += (*Brr);
        Brr ++;
    }

    fAvg = (float)iSum/(float)size;     
    return fAvg;
    
}