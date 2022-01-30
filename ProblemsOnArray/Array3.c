//========================================================================================================================================================================
//Header.h 

#include<stdio.h>
#include<stdlib.h>
int Addition(int*,int);
//========================================================================================================================================================================
//Main.c

int main(int argc, char const *argv[])
{
    
    int iSize = 0, iRet = 0;
    //int Arr[iSize]; //Array of 5 integers
    int *ptr = NULL;

    ptr = (int*) malloc(iSize * sizeof(int));

    printf("Enter the size of array \n");
    scanf("%d",&iSize);
    printf("Enter the elements of the array\n");

    for ( int iCnt = 0; iCnt < iSize; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]); 
    }   

    iRet = Addition(ptr,iSize);
    printf("Addition is : %d\n",iRet);

    free(ptr);
        
    return 0;
}
//========================================================================================================================================================================
//Helper.c

int Addition(int *Brr,int size)
{
    int iCnt = 0, iSum = 0;
    
    for (int iCnt = 0; iCnt < size ; iCnt++)
    {
        iSum += (*Brr);
        Brr ++;
    }

    return iSum;
    
}